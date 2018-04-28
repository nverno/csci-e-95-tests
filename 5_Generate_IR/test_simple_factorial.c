int main(int argc, char *argv[]) {
    return 0;
}

int factorial(int n) {
  if(n <= 1)
    return 1;
  else
    return n*factorial(n-1);
}
