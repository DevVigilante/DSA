/*
 * QuestionID: 7
 * Write a program to sort the given array of integers
 * into ascending form using bubble sort algorithm.
 */

#include <stdio.h>

void printArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void sortArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      int curr = arr[j];
      int next = arr[j + 1];

      if (curr > next) {
        int temp = curr;
        arr[j] = next;
        arr[j + 1] = temp;
      }
    }
  }
}


int main() {
  int numbers[] = {7, 8, 5, 9, 2};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  sortArray(numbers, length);
  printArray(numbers, length);
  return 0;
}