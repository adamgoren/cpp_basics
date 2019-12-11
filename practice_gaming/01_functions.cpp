#include <stdio.h>

// declaring our function before our main entrypoint
void func1 () {
  printf("func1 with no arguments\n");
}

// function over-loading, can let func1 mean multiple things. won't work in C
// %d is required for the printf function, lets it know we're printing out an int. for float, we'd need to put %g
void func1 (int x) {
  printf("func1 with argument %d\n", x);
}

// when we call func1 below, can infer which one is meant to be used based on arguments that are passed
int main() 
{
  func1();
  func1(7);
  return 0;
}