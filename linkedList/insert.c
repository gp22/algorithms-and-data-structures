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
  /*
  For all other cases we will need to go to the (n-1)th node.
  To do this we need to start at the head.
  */
  struct Node* temp2 = head;
  /*
  This for loop will iterate through each node in the list n-2 times,
  which will end up at the (n-1)th node.
  */
  for (int i = 0; i < n-2; i++)
  {
    temp2 = temp2->next;
  }
  /*
  The next step is to set the link field of the newly created node (temp1) as
  the link of the (n-1)th node (temp2), and then adjust the link of the (n-1)th
  node (temp2) to point to the newly created node (temp1);
  */
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void Print()
{
  struct Node* temp = head;
  while (temp != NULL)
  {
    printf("%d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

/* -------------------------------- Main -------------------------------- */

int main() {
  head = NULL; // empty list
  Insert(2, 1); // List: 2
  Insert(3, 2); // List: 2, 3
  Insert(4, 1); // List: 4, 2, 3
  Insert(5, 2); // List: 4, 5, 2, 3
  Print();
}