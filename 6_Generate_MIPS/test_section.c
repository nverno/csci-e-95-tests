int main(void);
void syscall_print_string(char *string);
int syscall_read_int(void);
void syscall_exit(void);
void print_str(char *string);

int main(void) {
    int i, j, k, l;
    i = 1;
    while (i > 0) {
        print_str("Enter zero to exit\n");
        i = syscall_read_int();
    }
    syscall_print_string("Goodbye\n");
    syscall_exit();
    
    return 1;
}

void print_str(char *string) {
    syscall_print_string(string);
}
