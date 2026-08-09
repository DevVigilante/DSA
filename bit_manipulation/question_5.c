/*
 * QuestionID: 5
 * Clear the bit of number n = 7 at position 2nd.
 */

#include <stdio.h>

int main() {
  int n = 7;
  int bitmask = 1 << 1;
  int result = n ^ bitmask;
  printf("The number %d ^ %d is %d\n", n, bitmask, result);

  return 0;
}