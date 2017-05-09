// Linked list: inserting a node at nth position.
// From mycodeschool: https://youtu.be/IbvsNF22Ud0
#include <stdlib.h>
#include <stdio.h>

struct Node
{
  int data;
  struct Node* next;
};

struct Node* head; // Define the head of the list as a global variable.

/* ------------------------- Function Definitions ------------------------- */

void Insert(int data, int n)
{
  // Create a new node.
  struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
  temp1->data = data;
  temp1->next = NULL;
  // If we're inserting this node at the beginning of the list.
  if (n == 1)
  {
    temp1->next = head;
    head = temp1;
    return;
  }
  // For all other cases we will need to go to the (n-1)th node.
  
};

/* -------------------------------- Main -------------------------------- */

int main() {
  head = NULL; // empty list
  Insert(2, 1); // List: 2
  Insert(3, 2); // List: 2, 3
  Insert(4, 1); // List: 4, 2, 3
  Insert(5, 2); // List: 2, 5, 2, 3
  Print();
}