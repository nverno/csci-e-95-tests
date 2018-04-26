int read_int(void);
void read_string(char *s, int n);
void print_int(int i);
void print_string(char *s);
int atoi(char *s);
void strcpy(char *dest, char *src);
void print_int_hex(int i);

unsigned int gi;

void function(unsigned short s, unsigned char c) {
    unsigned int i;
    gi = 3735928559; /* 0xDEADBEEF */
    i = 4294967295; /* 0xFFFFFFFF */
    {
        unsigned int i;
        i = 305419896; /* 0x12345678 */
        print_string("inner int: ");
        print_int_hex(i);
        print_string("\n");
    }
    {
        unsigned char c;
        unsigned short s;

        print_string("{unsigned char, unsigned short}: ");
        print_int_hex(c);
        print_string(" ");
        print_int_hex(s);
        print_string("\n");
    }
    {
        unsigned short s;
        unsigned char c;

        print_string("{unsigned short, unsigned char}: ");
        print_int_hex(s);
        print_string(" ");
        print_int_hex(c);
        print_string("\n");
    }
    {
        unsigned short s;
        {
            unsigned char c;

            print_string("{unsigned short, {unsigned char}}: ");
            print_int_hex(s);
            print_string(" ");
            print_int_hex(c);
            print_string("\n");
        }
    }
    {
        unsigned short s;
        {
            unsigned short s;

            print_string("{{unsigned short}, unsigned short}: ");
            print_int_hex(s);
            print_string(" ");
        }
        print_int_hex(s);
        print_string("\n");
    }

    print_string("parameters: ");
    print_int_hex(s);
    print_string(" ");
    print_int_hex(c);
    print_string("\n");

    print_string("outer int: ");
    print_int_hex(i);
    print_string("\n");
}

int main(int argc, char *argv[]) {
    function(atoi(argv[1]), atoi(argv[2]));

    print_string("global int: ");
    print_int_hex(gi);
    print_string("\n");
}
