/*
 * QuestionID: 1
 * Get the third bit of number n = 5
 */

#include <stdio.h>

int main() {
  int n = 5;
  int bitmask = 1 << 2;
  int result = n & bitmask;

  if (result) {
    printf("The 3rd bit is 1\n");
  } else {
    printf("The 3rd bit is 0\n");
  }
}