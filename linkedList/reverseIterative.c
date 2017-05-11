// Linked list: reverse iteratively.
// From mycodeschool: https://youtu.be/sYcOK51hl-A
#include <stdlib.h>
#include <stdio.h>

struct Node
{
  int data;
  struct Node* next;
};

/* ------------------------- Function Definitions ------------------------- */

struct Node* Reverse(struct Node* head)
/*
Reverse a linked list and return the address of the head node.
*/
{
  /*
  We need to iterate through the list, and reverse the links. So we'll need
  variables to keep track of the current, previous and next nodes.
  */
  struct Node *current, *prev, *next;
  current = head; // Start at the head of the list.
  prev = NULL; // Initialize prev.
  while (current != NULL)
  {
    next = current->next; // Save the link to the next node before overwriting it.
    current->next = prev; // Set the link of the current node to the previous node.
    prev = current; // So that we can reference the current node in the next node.
    current = next; // Set the current node to point to the next node.
  }
  head = prev; // Set head to point to the last node in the list.
  return head;
}

struct Node* Insert(struct Node* head, int data)
{
  // Insert a node at the end of the list.
  // Create a new node.
  struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
  temp1->data = data;
  temp1->next = NULL;
  // If we're inserting this node at the beginning of the list.
  if (head == NULL)
  {
    head = temp1;
    return head;
  }
  /*
  For all other cases we will need to go to the last node.
  To do this we need to start at the head.
  */
  struct Node* temp2 = head;
  /*
  This while loop will iterate through each node in the list, and then sets
  temp2 to point to the last next in the list.
  */
  while (temp2->next != NULL)
  {
    temp2 = temp2->next;
  }
  /*
  The next step is to set the link field of the last node (temp2) as
  the link of the newly created node (temp1).
  */
  temp2->next = temp1;
  return head;
}

void Print(struct Node* head)
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

int main()
{
  struct Node* head = NULL;
  head = Insert(head, 2);
  head = Insert(head, 4);
  head = Insert(head, 6);
  head = Insert(head, 8);
  Print(head);
  head = Reverse(head);
  Print(head);
}