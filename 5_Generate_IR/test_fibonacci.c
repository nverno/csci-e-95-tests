short fib(short n) { return (n < 2 ? 1 : fib(n - 1) + fib(n - 2)); } 
int main(int argc, char *argv[]) { return fib(256); }
