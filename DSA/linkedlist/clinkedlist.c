#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node* next;
};

typedef struct Node Node;

Node* createNode(int data){
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = newNode;
  return newNode;
}

Node* insertatend(Node* head, int data){
  Node* newNode = createNode(data);
  Node* temp = head;
  while(temp->next!=head){
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->next = head;
  return head;
}

Node* deletefrommiddle(Node* head, int index){
  Node* temp = head;
  Node* prev;
  for(int i=0;i<index;i++){
    prev = temp;
    temp = temp->next;
  }
  prev->next = temp->next;
  free(temp);
  return head;
}

void traversal(Node* head){
  Node* temp = head;
  do{
    printf("%d->", temp->data);
    temp = temp->next;
  }while(temp!=head);
}

int main(){
  struct Node* head = createNode(1);
  head = insertatend(head, 2);
  head = insertatend(head, 3);
  head = insertatend(head, 4);
  head = insertatend(head, 5);
  traversal(head);
  head = deletefrommiddle(head, 2);
  printf("\n");
  traversal(head);
}
