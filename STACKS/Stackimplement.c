#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
}node;

typedef struct Stack {
  node* top;
}stack;

void push(stack* s, int data) {
  node* newnode=(node*)malloc(sizeof(node));
  newnode->data=data;
  newnode->next=s->top;
  s->top=newnode;
}

int pop(stack* s) {
  if(s->top==NULL) {
    printf("Stack is empty\n");
    return -1;
  }
  int popped=s->top->data;
  node* temp=s->top;
  s->top=s->top->next;
  free(temp);
  return popped;
}

int tops(stack* s) {
  if(s->top==NULL) {
    printf("Stack is empty\n");
    return -1;
  }
  return s->top->data;
}

int empty(stack* s) {
  return s->top==NULL;
}

void display(stack* s) {
  node* temp=s->top;
  while(temp!=NULL) {
    printf("%d ", temp->data);
    temp=temp->next;
  }
  printf("\n");
}

int main() {
  stack s;
  s.top=NULL;
  push(&s, 10);
  push(&s, 20);
  push(&s, 30);
  push(&s, 40);
  push(&s, 50);
  display(&s);
  printf("Top element is %d\n", tops(&s));
  pop(&s);
  display(&s);
  printf("Top element after popping is %d\n", tops(&s));
  printf("Is stack empty? %d\n", empty(&s));
  return 0;}