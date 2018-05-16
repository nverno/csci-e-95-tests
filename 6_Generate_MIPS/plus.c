int syscall_read_int(void);
void syscall_exit(void);
void syscall_print_int(int integer);
void syscall_print_string(char *string);
void syscall_read_string(char *buffer, int length);

int main(int argc, char *argv) {
  syscall_print_string("10 + 12 = ");
  syscall_print_int(10 + 12);
  syscall_print_string("\n");
}
