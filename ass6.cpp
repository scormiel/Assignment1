#include <stdio.h> //i/o
#include<stdlib.h> // dynamic emory allocation

struct Node {
  int value;
  Node *next;
} *head, *tail, *head2,*tail2;

Node *createNode(int value) {
  Node *temp = (Node*)malloc(sizeof(Node));
  temp->value = value;
  temp->next = NULL;
  return temp;
}
void pushTail(int value) {
  Node *temp = createNode(value);

  if(!head) {
    head = tail = temp;
  } else {
    tail->next = temp;
    tail = temp;
  }
}
void pushTail2(int value) {
  Node *temp = createNode(value);

  if(!head2) {
    head2 = tail2 = temp;
  } else {
    tail2->next = temp;
    tail2 = temp;
  }
}

void printLinkedList() {
  Node *curr = head;

  while(curr) {
    printf("%d -> ", curr->value);
    curr = curr->next;
  }
  printf("NULL\n");
}
void rev() {
  Node *curr= head;
  Node *prev=NULL;
  Node *next;

  while(curr) {
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
  }

  head=prev;
}

int main(){
    pushTail(1);
    pushTail(2);
    pushTail(3);
    pushTail(4);
    pushTail(5);
    rev();
    printLinkedList();
    return 0;
}
