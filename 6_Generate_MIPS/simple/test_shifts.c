void syscall_print_int(int integer);

int main(int argc, char *argv[]) {
    int x, y;
    x = 32;
    y = 2;
    x >>= y;
    syscall_print_int(x);
    
    return 0;
}
