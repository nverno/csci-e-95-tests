void syscall_print_int(int integer);
void syscall_print_string(char *string);

int i;

void main(void) {
  for (i = 0; i <= 5; i++)
    syscall_print_int(i);
}
