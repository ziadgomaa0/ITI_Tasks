#include<stdio.h>
void find_repeated(int *arr, int n) {
  // Initialize a boolean array to store the occurrence of each element
  int found[n] = {0};

  // Iterate over the array
  for (int i = 0; i < n; i++) {
    // If the element has already been found, then it is the repeated element
    if (found[arr[i]] == 1) {
      printf("The repeated element is %d.\n", arr[i]);
      return;
    }

    // Otherwise, mark the element as found
    found[arr[i]] = 1;
  }

  // If no repeated element is found, then print "No repeated element found."
  printf("No repeated element found.\n");
}

int main() {
  int arr[] = {1, 2, 3, 4, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  find_repeated_element(arr, n);
  return 0;
}