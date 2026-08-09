/*
 * QuestionID: 4
 * Set the 2nd bit of number n = 5
 */

#include <stdio.h>

int main() {
  int n = 5;
  int bitmask = 1 << 1;
  int result = n | bitmask;
  printf("The number %d | %d is %d\n", n, bitmask, result);

  return 0;
}