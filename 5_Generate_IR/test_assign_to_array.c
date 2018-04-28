int main(int argc, char *argv[]) {
    char b, *c;
    b = 'a';
    c = &b;
    argv[0] = c;
    return 0;
}
