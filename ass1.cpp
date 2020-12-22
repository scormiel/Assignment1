#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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
void mergeList() {
  tail->next=head2;
}
void printLinkedList() {
  Node *curr = head;

  while(curr) {
    printf("%d -> ", curr->value);
    curr = curr->next;
  }
  printf("NULL\n");
}

int main(){
    int x;
    scanf("%d",&x);
    pushTail(x);
    scanf("%d",&x);
    pushTail2(x);
    scanf("%d",&x);
    pushTail(x);
    scanf("%d",&x);
    pushTail2(x);
    scanf("%d",&x);
    pushTail(x);
    scanf("%d",&x);
    pushTail2(x);
    scanf("%d",&x);
    pushTail(x);
    scanf("%d",&x);
    pushTail2(x);
    scanf("%d",&x);
    pushTail(x);
    scanf("%d",&x);
    pushTail2(x);
    scanf("%d",&x);
    mergeList();
    printLinkedList();
    return 0;
}
