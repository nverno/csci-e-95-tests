void syscall_print_int(int integer);

int main(int argc, char *argv[]) {
    int x, y;
    x = 2;
    y = 4;
    syscall_print_int(x * y / x);
    return 0;
}
