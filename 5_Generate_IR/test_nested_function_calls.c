int fn(int a) { return a; }
int main(int argc, char *argv[]) {
    int b;
    b = fn(fn(fn(1)));
    return 0;
}
