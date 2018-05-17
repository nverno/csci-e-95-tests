void syscall_print_int(int integer);

int main(int argc, char *argv[]) {
    int x, y;
    x = 1;
    y = 0;
    
    syscall_print_int(x & y ^ 1);
    /* syscall_print_int(x | y); */
    /* syscall_print_int(x & y); */
    
    return 0;
}
