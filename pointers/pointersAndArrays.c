// https://youtu.be/ASVB8KAFypk?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
#include <stdio.h>

int main()
{
  int a[] = { 2, 4, 5, 8, 1 };
  // int *p = a;
  printf("the address of a[0] is %p\n", a);
  printf("the value of a[2] is %d\n", *(a + 2));
  printf("the address of a[1] is %p\n", a + 1);
  // printf("a[0] + 1 is %p\n", &a[0] + 1);
  // printf("a + 1 = %p\n", a + 1);
}