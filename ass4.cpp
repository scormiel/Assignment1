#include <stdio.h>
#include <stdlib.h>

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

void printLinkedList() {
  Node *curr = head;

  while(curr) {
    printf("%d -> ", curr->value);
    curr = curr->next;
  }
  printf("NULL\n");
}

void dupremover(){
  Node *curr = head;
  Node *temp;
  while(curr->next){
    if(curr->value==curr->next->value){
        temp = curr->next->next;
        curr->next=NULL;
        curr->next = temp;
    }
    else{
      curr= curr->next;
    }
  }
}

int main(){
    pushTail(1);
    pushTail(2);
    pushTail(3);
    pushTail(3);
    pushTail(5);
    dupremover();
    printLinkedList();
    return 0;
}
