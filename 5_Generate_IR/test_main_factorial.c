void syscall_print_int(int integer);
void syscall_print_string(char *string);
int syscall_read_int(void);
void syscall_read_string(char *buffer, int length);
void syscall_exit(void);

char *strcpy(char *dest, char *src);
int factorial(int n);

void exit(int n);
void scanf(char *, int *);
void printf(char *, int);
void putchar(char);
        
int main(void) {
  char prompt[80];
  int n, f;

  strcpy(prompt, "Factorial of ");
  syscall_print_string(prompt);

  n = syscall_read_int();

  strcpy(prompt, " equals ");
  syscall_print_string(prompt);

  f = factorial(n);

  syscall_print_int(f);

  strcpy(prompt, "\n");
  syscall_print_string(prompt);

  return 0;
}
