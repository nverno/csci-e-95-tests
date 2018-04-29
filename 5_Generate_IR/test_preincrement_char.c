int main(int argc, char *argv[]) {
    char a, c;
    a = ++c;  /* c should be cast from byte to int for operand, and back */
    return 0;
}
