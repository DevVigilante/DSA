/*
 * QuestionID: 2
 * Get the fourth bit of number n = 5
 */

# include <stdio.h>

int main() {
  int n = 5;
  int bitmask = n << 3;
  int output = n & bitmask;

  if (output) {
    printf("The 4th bit is 1\n");
  } else {
    printf("The 4th bit is 0\n");
  }
}