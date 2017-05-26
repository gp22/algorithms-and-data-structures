#include <stdlib.h>
#include <stdio.h>

/* ------------------------- Function Definitions ------------------------- */

int findSmallest(int arr[], int l) {
  int smallest = arr[0];
  int smallest_index = 0;
  for (int i = 0; i < l; i++) {
    if (arr[i] < smallest) {
      smallest = arr[i];
      smallest_index = i;
    }
  }
  return smallest_index;
}

void selectionSort(int unsorted[], int sorted[], int l) {
  int smallest;
  for (int i = 0; i < l; i++) {
    smallest = findSmallest(unsorted, l);
    sorted[i] = unsorted[smallest];
  }
  return;
}

void printArray(int arr[], int l) {
  for (size_t i = 0; i < l; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

/* -------------------------------- Main -------------------------------- */

int main(void) {
  int unsorted[5] = {5, 3, 6, 2, 10};
  int sorted[5];
  int length = sizeof(unsorted)/sizeof(unsorted[0]);
  selectionSort(unsorted, sorted, length);
  printArray(unsorted, length);
  printArray(sorted, length);
  return EXIT_SUCCESS;
}
