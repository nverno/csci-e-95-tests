int atoi(char *s);
void function(unsigned short s, unsigned char c);

int main(int argc, char *argv[]) {
    function(atoi(argv[1]), atoi(argv[2]));

    return 0;
}
