void syscall_print_int(int integer);

int x;
int main(int argc, char *argv[]) {
    x = 42;
    syscall_print_int(x);
    return 0;
}
