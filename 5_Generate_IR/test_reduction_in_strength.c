int read_int(void);
void read_string(char *s, int n);
void print_int(int i);
void print_string(char *s);
int atoi(char *s);
void strcpy(char *dest, char *src);
void print_int_hex(int i);


int main(int argc, char *argv[]) {
    int x;
    x = atoi(argv[1]);

    print_string("\nx * 1024 = ");
    print_int(x * 1024);

    print_string("\n1024 * x = ");
    print_int(1024 * x);

    print_string("\nx / 1024 = ");
    print_int(x / 1024);

    print_string("\nx % 1024 = ");
    print_int(x % 1024);

    print_string("\n");
    return 0;
}
