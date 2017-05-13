/*
Using pointers as function arguments is known as 'call by reference.'
https://youtu.be/LW8Rfh6TzGg?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
*/
#include <stdio.h>

void Increment(int *p)
{
  printf("p points to address %p\n", p);
  printf("the value stored in p is %d\n", *p);
  *p = (*p) + 1; // Dereference p and increment the value by 1;
}

int main()
{
  int a = 10;
  printf("the address of a is %p\n", &a);
  Increment(&a);
  printf("a = %d\n", a);
}