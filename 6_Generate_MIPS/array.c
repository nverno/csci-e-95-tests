/* SPIM syscall functions */
int syscall_read_int(void);
void syscall_exit(void);
void syscall_print_int(int integer);
void syscall_print_string(char *string);
void syscall_read_string(char *buffer, int length);

short i[10];

int main(int argc, char *argv) {
  i[5] = -19;

  syscall_print_string("i[5] = ");
  syscall_print_int(i[5]);
  syscall_print_string("\n");
  return 0;
}
