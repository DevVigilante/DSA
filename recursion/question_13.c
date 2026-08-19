/*
 * QuestionID: 11
 * Print factorial of a given number n.
 */

#include <stdio.h>

int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  return factorial(n - 1) * n;
}

int main() {
  printf("Factorial of 0 is %d\n", factorial(0));
  printf("Factorial of 1 is %d\n", factorial(1));
  printf("Factorial of 2 is %d\n", factorial(2));
  printf("Factorial of 5 is %d\n", factorial(5));
  return 0;
}
