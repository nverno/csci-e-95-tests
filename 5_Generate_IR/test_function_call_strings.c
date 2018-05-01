/* Built-in syscalls */
void syscall_print_int(int integer);
void syscall_print_string(char *string);
int syscall_read_int(void);
void syscall_read_string(char *buffer, int length);
void syscall_exit(void);
void tst(char *str);
char *strcpy(char *dest, char *src);

int main(void) {
    char prompt[80];
    char c;
    int n, f;
    strcpy(prompt, "Factorial of ");
    syscall_print_string("abc");
    return n;
}
