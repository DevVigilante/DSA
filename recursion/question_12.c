/*
 * QuestionID: 11
 * Write a program to get sum of first n natural number using recursion.
 */

#include <stdio.h>


int sum(int curr, int n, int sum);

int calculateSum(int curr, int n, int sum) {
  if (curr == n) {
    return sum + curr;
  }
  return calculateSum(curr + 1, n, sum + curr);
}

int main() {
  printf("The sum of first %d natural number is %d\n", 4, calculateSum(1, 4, 0));
  return 0;
}
