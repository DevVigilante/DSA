/*
 * QuestionID: 11
 * Write a program to print number from 1 to 5 using recursion.
 */

#include <stdio.h>

void printNumber(int n) {
  if (n > 5) {
    printf("\n ");
    return;
  }
  printf("%d ", n);
  printNumber(n + 1);
}

int main() {
  printNumber(1);
  return 0;
}
