void print_int(int i);
void print_string(char *s);
int atoi(char *s);

int absolute(int x) {
    return (x < 0 ? -x : x);
}

int gcd(int a, int b) {
    int c;
    a = absolute(a);
    b = absolute(b);
    c = a % b;
    while (c > 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main(int argc, char *argv[]) {
    
    return 0;
}
