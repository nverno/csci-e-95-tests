          int read_int(void);
    void read_string(char *s, int n);
    void print_int(int i);
    void print_string(char *s);
    int atoi(char *s);
    void strcpy(char *dest, char *src);
    void print_int_hex(int i);

      int square(int n) {
        return n * n;
      }

      int cube(int n) {
        return n * n * n;
      }

      int main(int argc, char *argv[]) {
        int n, result, choice;
        int (*f)(int);
        char *name;

        n = atoi(argv[1]);
        choice = atoi(argv[2]);

        f = (3 == choice ? cube : square);
        name = (3 == choice ? "cube" : "square");
        result = f(n);
        print_string(name);
        print_string(" of ");
        print_int(n);
        print_string(" is ");
        print_int(result);
        print_string("\n");
        return 0;
      }
