// Linked list: delete a node at nth position.
// From mycodeschool: https://youtu.be/Y0n86K43GO4
#include <stdlib.h>
#include <stdio.h>

struct Node
{
  int data;
  struct Node* next;
};

struct Node* head; // Define the head of the list as a global variable.

/* ------------------------- Function Definitions ------------------------- */

void Insert(int data)
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
    return;
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
}

void Delete(int n)
{
  // Delete node n in the linked list.
  struct Node* temp1 = head;
  // If we want to delete the head node.
  if (n == 1)
  {
    head = temp1->next; // head now points to the second node.
    // Deallocate the memory for temp1 that was allocated with malloc().
    free(temp1);
    return;
  }

  int i;
  for (i = 0; i < n-2; i++)
  {
    temp1 = temp1->next; // temp1 points to the (n-1)th node.
  }

  struct Node* temp2 = temp1->next; // temp2 points to the nth node.
  /*
  Now to remove the nth node from the list, we make the (n-1)th node point
  to the (n+1)th node.
  */
  temp1->next = temp2->next;
  /*
  temp2 still stores the reference to the nth node. So we use free() to
  deallocate whatever memory was allocated with malloc().
  */
  free(temp2);
}

void Print()
{
  struct Node* temp = head;
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

/* -------------------------------- Main -------------------------------- */

int main() {
  head = NULL; // empty list
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5); // List: 2, 4, 6, 5
  Print();
  int n;
  printf("enter a position\n");
  scanf("%d", &n);
  Delete(n);
  Print();
}