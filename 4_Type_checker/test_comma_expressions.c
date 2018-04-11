int main(int argc, char *argv[]) {
    short s1;
    int i1;
    long l1;
    char *pi1;
    pi1 = "hello";

    s1 = 0;
    l1 = (s1 = s1 + 5, pi1 += 1, s1);
    
    /* printf("%ld\n", l1); */
    
    return 0;
}
