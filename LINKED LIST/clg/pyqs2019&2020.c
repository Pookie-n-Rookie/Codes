<<<<<<< HEAD
//PYQ 2019 n 2020 NO.
#include<stdio.h>
#include<stdlib.h>
int i;

typedef struct Node{
  int data;
  struct Node* next;
} node;

node* createNode(int data){
  node* newNode = (node*)malloc(sizeof(node));
  if(newNode == NULL){
    printf("Memory error\n");
    exit(0);
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}
node* createlinklist(int size){
  node*head=NULL;
  node* temp = head;
  for(int i=0; i<size; i++){
    int data;
    printf("Enter data for node %d: ", i+1);
    scanf("%d", &data);
    node* newNode = createNode(data);
    if(head == NULL){
      head = newNode;
    }
    else{
      temp->next = newNode;
    }
    temp = newNode;
  
}
  return head;
}
void displaycommonelement(node**head1, node**head2){
  node* temp1 = *head1;
  node* temp2 = *head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      printf("%d ", temp1->data);
      temp1 = temp1->next;
      temp2 = temp2->next;
    }
    else if(temp1->data < temp2->data){
      temp1 = temp1->next;
    }
    else{
      temp2 = temp2->next;
    }
  }
  printf("\n");  
  }

int main(){
  int size1, size2;
  printf("Enter the size of the first linked list: ");
  scanf("%d", &size1);
  node* head1 = createlinklist(size1);
  printf("Enter the size of the second linked list: ");
  scanf("%d", &size2);
  node* head2 = createlinklist(size2);
  printf("Common elements in the two linked lists are: ");
  displaycommonelement(&head1, &head2);
  return 0;
}

=======
//PYQ 2019 n 2020 NO.
#include<stdio.h>
#include<stdlib.h>
int i;

typedef struct Node{
  int data;
  struct Node* next;
} node;

node* createNode(int data){
  node* newNode = (node*)malloc(sizeof(node));
  if(newNode == NULL){
    printf("Memory error\n");
    exit(0);
  }
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}
node* createlinklist(int size){
  node*head=NULL;
  node* temp = head;
  for(int i=0; i<size; i++){
    int data;
    printf("Enter data for node %d: ", i+1);
    scanf("%d", &data);
    node* newNode = createNode(data);
    if(head == NULL){
      head = newNode;
    }
    else{
      temp->next = newNode;
    }
    temp = newNode;
  
}
  return head;
}
void displaycommonelement(node**head1, node**head2){
  node* temp1 = *head1;
  node* temp2 = *head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      printf("%d ", temp1->data);
      temp1 = temp1->next;
      temp2 = temp2->next;
    }
    else if(temp1->data < temp2->data){
      temp1 = temp1->next;
    }
    else{
      temp2 = temp2->next;
    }
  }
  printf("\n");  
  }

int main(){
  int size1, size2;
  printf("Enter the size of the first linked list: ");
  scanf("%d", &size1);
  node* head1 = createlinklist(size1);
  printf("Enter the size of the second linked list: ");
  scanf("%d", &size2);
  node* head2 = createlinklist(size2);
  printf("Common elements in the two linked lists are: ");
  displaycommonelement(&head1, &head2);
  return 0;
}

>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
