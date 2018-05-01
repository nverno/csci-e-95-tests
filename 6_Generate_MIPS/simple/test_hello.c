void syscall_print_int(int integer);
void syscall_print_string(char *string);
int syscall_read_int(void);
void syscall_read_string(char *buffer, int length);
void syscall_exit(void);

char *str;
int arr[100];

int main(int argc, char *argv[]) {
    str = "hello\n";
    syscall_print_string(str);

    return 0;
}
