void syscall_print_int(int integer);

int main(int argc, char *argv[]) {
    int x;
    x = 2;
    syscall_print_int(-x);  /* unary minus */
    syscall_print_int(~x);
    syscall_print_int(!x);
    return 0;
}
