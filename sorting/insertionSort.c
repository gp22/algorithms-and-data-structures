#include <stdlib.h>
#include <stdio.h>

int sort(int a[], int length)
{
  for (int j = 1; j < length; j++)
  {
    int key = a[j];
    int i = j - 1;
    while (i >= 0 && a[i] > key)
    {
      a[i + 1] = a[i];
      i = i - 1;
    }
    a[i + 1] = key;
  }
  return *a;
}

void print(int a[], int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main() {

  int array[6] = {6, 2, 4, 5, 1, 3};

  print(array, 6);
  sort(array, 6);
  print(array, 6);
}