#include <stdlib.h>
#include <stdio.h>

/* ------------------------- Function Definitions ------------------------- */

// Insertion sort algorithm.
int sort(int a[], int length) {
  for (int j = 1; j < length; j++) {
    int key = a[j];
    int i = j - 1;
    while (i >= 0 && a[i] > key) {
      a[i + 1] = a[i];
      i -= 1;
    }
    a[i + 1] = key;
  }
  return *a;
}

// Print all elements in an integer array of length.
void print(int a[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

/* -------------------------------- Main -------------------------------- */

int main() {

  int array[6] = {1, 2, 4, 5, 6, 3};

  print(array, 6);
  sort(array, 6);
  print(array, 6);
}