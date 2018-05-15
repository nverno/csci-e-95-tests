/* begin: stdlib.c */

/* This file contains a number of functions are are useful for programs to use
 * in the compiler. */

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

char caesar_char(char c, int shift) {
  int base;
  if ('A' <= c && 'Z' >= c) {
    base = 'A';
  } else if ('a' <= c && 'z' >= c) {
    base = 'a';
  } else {
    base = 0;
  }

  if (base > 0) {
    c -= base;
    c += shift;
    c %= 26;
    c += base;
  }

  return c;
}

int main(int argc, char *argv[]) {
  char string[100];
  int shift, i;

  syscall_print_string("Enter string to shift: ");
  syscall_read_string(string, 100);

  syscall_print_string("Enter shift amount: ");
  shift = syscall_read_int();

  i = 0;
  while (string[i]) {
    string[i] = caesar_char(string[i], shift);
    i++;
  }

  syscall_print_string("Shifted string: ");
  syscall_print_string(string);
  syscall_print_string("\n");
  return 0;
}
