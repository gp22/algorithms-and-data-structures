#include <stdlib.h>
#include <stdio.h>

int main() {
  // int a = 5;
  // char *p;
  // int *p; // Pointer that points to an int. Only contains a memory address.
  // p = &a; // Assigns the address of a to p. &a returns a pointer to a.
  // printf("%p\n", &a); // Prints the memory address of a.
  // printf("%p\n", p); // Prints the memory address that p points to.
  // printf("%d\n", a);
  // printf("%d\n", *p); // Dereferencing - *p gives the value at the location that p points to.
  // *p = 8; // Dereferencing p.
  // printf("%d\n", a);
  // printf("%d\n", p);
  // printf("size of char is %d bytes\n", sizeof(char));
  // printf("%d\n", *p + 9);

  int a = 1025;
  int *p;
  p = &a;
  printf("size of integer is %d bytes\n", sizeof(int));
  printf("Address = %d, value = %d\n", p, *p);
  printf("Address = %d, value = %d\n", p+1, *(p+1));
  char *p0;
  p0 = (char*)p; // Typecasting
  printf("size of char is %d bytes\n", sizeof(char));
  printf("Address is %d, value = %d\n", p0, *p0);
  printf("Address is %d, value = %d\n", p0+1, *(p0+1));
}