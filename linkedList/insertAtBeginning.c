// Linked list: inserting a node at the beginning.
// From mycodeschool: https://youtu.be/cAZ8CyDY56s
#include <stdlib.h>
#include <stdio.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node* head; // Define the head of the list as a global variable.

/* ------------------------- Function Definitions ------------------------- */

void Insert(int x) // Insert an int into the list.
{
  // Create a new node.
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = x; // Set the data property of struct Node to x.
  temp->next = NULL; // Set the next property of struct Node to be empty.
  temp->next = head;
  head = temp;
}

void Print()
{
  struct Node* temp = head;
  printf("List is: ");
  while (temp != NULL)
  {
    printf("%d, ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

/* -------------------------------- Main -------------------------------- */

int main() {
  head = NULL; // Set the linked list to empty.
  printf("How many numbers?\n");
  int n, i, x;
  scanf("%d", &n);
  
  for (i = 0; i < n; i++)
  {
    printf("Enter the number \n");
    scanf("%d", &x);
    Insert(x);
    Print();
  }
}