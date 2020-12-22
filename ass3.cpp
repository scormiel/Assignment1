#include<stdio.h>
#include<stdlib.h>
struct Node {
    int value;
    Node *next;
} *head, *tail;

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
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}

int checkSize() {
    int counter=1;
    Node *curr = head;
    while(curr) {
        curr = curr->next;
        counter++;
}
    return counter;
}

void printLinkedList(int size) {
  Node *curr = head;
  int counter=1;
  int mid=size/2;

  while(curr) {
    if(counter==mid) {
        printf("%d\n", curr->value);
        return;
    }
    curr = curr->next;
    counter++;
  }
}

int main() {
  int x,n,val;
  printf("Size:\n");
  scanf("%d",&x);
  for(int i;i<x;i++){
    printf("link list:\n");
      scanf("%d",&val);
      pushTail(val);
  }
    printf("Mid: ");
    printLinkedList(checkSize());
}
