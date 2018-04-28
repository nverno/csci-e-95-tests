char *strcpy(char *dest, char *src) {
    char *initial_dest;

    initial_dest = dest;
    do {
        *dest++ = *src;
    } while(*src++);

    return initial_dest;
}

int main(int argc, char *argv[]) { return 0; }
