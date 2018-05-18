void syscall_print_int(int integer);
void syscall_print_string(char *string);

int i;

int main(void) {
  for (i = 0; i <= 5; i++)
    syscall_print_int(i);
  return 0;
}
