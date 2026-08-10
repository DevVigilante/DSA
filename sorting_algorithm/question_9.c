/*
 * QuestionID: 9
 * Write a program to sort the given array of integers
 * into ascending form using insertion sort algorithm.
 */

#include <stdio.h>

void printArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void sortArray(int arr[], int length) {
  if (length <= 1) {
    return;
  }
  for (int i = 1; i < length; i++) {
    // from 0 to i = sorted array part
    int curr = arr[i];
    int j = i - 1;
    while(j >= 0 && curr < arr[j]) {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = curr;
  }
}


int main() {
  int numbers[] = {7, 8, 5, 9, 2};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  sortArray(numbers, length);
  printArray(numbers, length);
  return 0;
}
