#include <stdio.h>

void bubble_sort(int array[], int size) {
  int i, j, temp;

  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void main() {
  int array[] = {10, 8, 6, 2, 4, 1, 3, 5, 7, 9};
  int size = sizeof(array) / sizeof(array[0]);

  printf("Unsorted array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  bubble_sort(array, size);

  printf("Sorted array: ");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}