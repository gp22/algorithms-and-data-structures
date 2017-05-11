#include <stdlib.h>
#include <stdio.h>

int main() {
  int a = 5;
  int *p; // Pointer that points to an int. Only contains a memory address.
  p = &a; // Assigns the address of a to p. &a returns a pointer to a.
  // printf("%p\n", &a); // Prints the memory address of a.
  // printf("%p\n", p); // Prints the memory address that p points to.
  // printf("%d\n", a);
  // printf("%d\n", *p); // Dereferencing - *p gives the value at the location that p points to.
  // *p = 8; // Dereferencing p.
  // printf("%d\n", a);
  printf("%p\n", p);
  printf("%d\n", *p);
}