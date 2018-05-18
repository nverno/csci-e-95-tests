void syscall_print_int(int integer);
int x;

int main(int argc, char *argv[]) {
    int y; 
    x = 1; 
    y = 2;

    /* syscall_print_int(x == y); /\* 0 *\/ */
    /* syscall_print_int(x != y); /\* 1 *\/ */
    /* syscall_print_int(x < y);  /\* 1 *\/ */
    /* syscall_print_int(x <= y); /\* 1 *\/ */
    /* syscall_print_int(x > y);  /\* 0 *\/ */
    syscall_print_int(x >= y); /* 0 */

    return 0;
}
