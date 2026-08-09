/*
 * QuestionID: 3
 * Get the ith bit of number n
 */

#include <stdio.h>

void getBit(int n, int position) {
  int bitmask = 1 << (position - 1);
  int output = n & bitmask;

  if (output) {
    printf("The %d bit of %d is 1\n", position, n);
  } else {
    printf("The %d bit of %d is 0\n", position, n);
  }
}

int main() {
  int n = 6;
  getBit(n, 1);
  getBit(n, 2);
  getBit(n, 3);
  getBit(n, 4);

  return 0;
}