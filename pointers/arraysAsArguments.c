/*
Arrays as function arguments.
https://youtu.be/CpjVucvAc3g?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
*/
#include <stdio.h>

int sum(int a[], int length)
{
  /*
  Arrays are always passed as a reference to the first element in the array.
  So inside of a function there is no way to determine the sizeof an array.
  A length parameter is required.
  */
  int i, sum = 0;

  for (i = 0; i < length; i++)
  {
    sum += a[i];
  }
  return sum;
}

int main()
{
  int a[] = { 2, 4, 5, 8, 1 };
  printf("sizeof a is %ld\n", sizeof(a));
  printf("sizeof a[0] is %ld\n", sizeof(a[0]));
  printf("length of a is %ld\n", sizeof(a)/sizeof(a[0]));
  int length = sizeof(a)/sizeof(a[0]);
  int total = sum(a, length);
  printf("sum of elements is %d\n", total);
}