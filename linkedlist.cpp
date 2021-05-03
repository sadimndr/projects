

#include <stdlib.h>
#include <iostream>

using namespace std;


struct Node {
  int item;
  struct Node* next;
};

void insertAtBeginning(struct Node**loc, int val) {

 
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = val;
  new_node->next = (*loc);
  (*loc) = new_node;
}


void insertAfter(struct Node* prev_node, int val) {
  if (prev_node == NULL) {
    cout << "the given previous node cannot be NULL";
    return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->item = val;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void insertAtEnd(struct Node** loc, int val) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *loc;

  new_node->item = val;
  new_node->next = NULL;

  if (*loc == NULL) {
    *loc = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void deleteNode(struct Node** loc, int key) {
  struct Node *temp = *loc, *prev;

  if (temp != NULL && temp->item == key) {
    *loc = temp->next;
    free(temp);
    return;
  }
  while (temp != NULL && temp->item != key) {
    prev = temp;
    temp = temp->next;
  }

  
  if (temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}


void display(struct Node* node) {
  while (node != NULL) {
    cout << node->item << " ";
    node = node->next;
  }
}


int main() {
  struct Node* head = NULL;
  insertAtEnd(&head, 1);
  insertAtBeginning(&head, 2);
  insertAtEnd(&head, 4);
  insertAfter(head->next, 5);
  cout << "Linked list: ";
  display(head);
  cout << "\nAfter deleting an element: ";
  deleteNode(&head, 2);
  display(head);
}
