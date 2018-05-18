/* Print a string */

void syscall_print_string(char *string);

int main(void) {
    syscall_print_string("There's a frood who really knows where his towel is.\n");
    return 0;
}
