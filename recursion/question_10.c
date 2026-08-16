/*
 * QuestionID: 10
 * Write a program to print number from 5 to 1 using recursion.
 */

#include <stdio.h>

void printNumber(int n) {
  if (n <= 0) {
    printf("\n ");
    return;
  }
  printf("%d ", n);
  printNumber(n - 1);
}

int main() {
  printNumber(5);
  return 0;
}
