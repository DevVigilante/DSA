/*
 * QuestionID: 8
 * Write a program to sort the given array of integers
 * into ascending form using selection sort algorithm.
 */

#include <stdio.h>

void printArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

void sortArray(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    int min_index = i;
    for (int j = i; j < length; j++) {
      int curr = arr[j];
      int minimum = arr[min_index];
      if (curr < minimum) {
        min_index = j;
      }
    }
    swap(arr, i, min_index);
    printArray(arr, length);
  }
}


int main() {
  int numbers[] = {7, 8, 5, 9, 2};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  sortArray(numbers, length);
  printArray(numbers, length);
  return 0;
}