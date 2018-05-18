void syscall_print_int(int integer);
short x;

int main(int argc, char *argv[]) {
    long y;
    signed char c;
    x = 255;
    c = x;
    syscall_print_int(c);
    
    return 0;
}
