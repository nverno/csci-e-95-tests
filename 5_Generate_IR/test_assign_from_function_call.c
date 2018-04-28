int fn(void) { return 0; }
int main(int argc, char *argv[]) {
    argc = fn();
    return argc;
}
