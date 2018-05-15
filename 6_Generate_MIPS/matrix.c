/* SPIM syscall functionso */
int syscall_read_int(void);
void syscall_exit(void);
void syscall_print_int(int integer);
void syscall_print_string(char *string);
void syscall_read_string(char *buffer, int length);

/*
 * atoi - converts a string to an integer
 *
 * Parameters:
 *   char *str - string to convert
 *
 * Returns:
 *  integer
 *
 *   See:
 * https://www.techonthenet.com/c_language/standard_library_functions/stdlib_h/atoi.php
 */
int atoi(char *str) {
  int i;
  int result;

  result = 0;

  for (i = 0; str[i] != '\0'; i++)
    result = (str[i] - '0') + (result * 10);

  return result;
}

int absolute(int x) { return (x < 0 ? -x : x); }

int gcd(int a, int b) {
  int c;
  a = absolute(a);
  b = absolute(b);
  c = a % b;
  while (c > 0) {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}

int determinant(int (*matrix)[8], int size) {
  int numerator, denominator;
  int i, j, k;
  int factor;

  if (1 == size) {
    return matrix[0][0];
  } else if (2 == size) {
    return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
  } else if (3 == size) {
    return (matrix[0][0] * matrix[1][1] * matrix[2][2] +
            matrix[0][1] * matrix[1][2] * matrix[2][0] +
            matrix[0][2] * matrix[1][0] * matrix[2][1]) -
           (matrix[0][0] * matrix[1][2] * matrix[2][1] +
            matrix[0][1] * matrix[1][0] * matrix[2][2] +
            matrix[0][2] * matrix[1][1] * matrix[2][0]);

  } else {
    numerator = 1;
    denominator = 1;
    for (i = 0; i < size; i++) {

      if (0 == matrix[i][i]) {
        /* find a row without a zero in this column and swap it in */
        for (j = i + 1; j < size; j++) {
          if (0 != matrix[j][i]) {
            for (k = i; k < size; k++) {
              matrix[i][k] ^= matrix[j][k];
              matrix[j][k] ^= matrix[i][k];
              matrix[i][k] ^= matrix[j][k];
            }
            denominator *= -1;
            break;
          }
        }
        /* matrix is singular */
        if (0 == matrix[i][i]) {
          return 0;
        }
      }

      for (j = i + 1; j < size; j++) {

        if (0 != matrix[j][i] % matrix[i][i]) {
          factor = matrix[i][i] / gcd(matrix[j][i], matrix[i][i]);
          for (k = i; k < size; k++) {
            matrix[j][k] *= factor;
          }
          denominator *= factor;
        }
        factor = matrix[j][i] / matrix[i][i];
        for (k = i; k < size; k++) {
          matrix[j][k] -= factor * matrix[i][k];
        }
      }

      numerator *= matrix[i][i];

      factor = gcd(numerator, denominator);
      numerator /= factor;
      denominator /= factor;
    }

    return numerator / denominator;
  }
}

int main(int argc, char **argv) {
  int *pm;
  int matrix[8][8];
  int size;
  int i, j;
  int det;

  size = atoi(argv[1]);

  if (size < 9) {
    for (i = 0; i < size; i++) {
      for (j = 0; j < size; j++) {
        matrix[i][j] = atoi(argv[i * size + j + 2]);
      }
    }

    det = determinant(matrix, size);
    syscall_print_string("The determinant is: ");
    syscall_print_int(det);

    syscall_print_string("\n");
  }
  return 0;
}
