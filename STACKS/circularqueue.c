<<<<<<< HEAD
// Circular queue implementation using linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

typedef struct Queue {
    node* front;
    node* rear;
} queue;

// Function to create a new circular queue
queue* createQueue() {
    queue* q = (queue*)malloc(sizeof(queue));
    if (!q) {
        printf("Memory error\n");
        return NULL;
    }
    q->front = NULL;
    q->rear = NULL;
    return q;
}

// Function to create a new node
node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void enqueue(queue* q, int data) {
    node* newNode = createNode(data);
    if (!newNode) return;

    if (q->rear == NULL) {  
        q->front = newNode;
        q->rear = newNode;
        newNode->next = q->front;  
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
        q->rear->next = q->front;  
    }
    printf("Enqueued: %d\n", data);
}


int dequeue(queue* q) {
    if (q->front == NULL) { 
        printf("Queue underflow\n");
        return -1;
    }

    int data;
    if (q->front == q->rear) {  
        data = q->front->data;
        free(q->front);
        q->front = q->rear = NULL;
    } else {  // More than one node
        node* temp = q->front;
        data = temp->data;
        q->front = q->front->next;
        q->rear->next = q->front;  // Maintain the circular link
        free(temp);
    }
    printf("Dequeued: %d\n", data);
    return data;
}


void display(queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    node* temp = q->front;
    printf("Queue elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != q->front);  
    printf("\n");
}


int isEmpty(queue* q) {
    return (q->front == NULL);
}

int main() {
    queue* q = createQueue();
    int choice, data;

    do {
        printf("\nCircular Queue operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to enqueue: ");
                scanf("%d", &data);
                enqueue(q, data);
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
=======
// Circular queue implementation using linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

typedef struct Queue {
    node* front;
    node* rear;
} queue;

// Function to create a new circular queue
queue* createQueue() {
    queue* q = (queue*)malloc(sizeof(queue));
    if (!q) {
        printf("Memory error\n");
        return NULL;
    }
    q->front = NULL;
    q->rear = NULL;
    return q;
}

// Function to create a new node
node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void enqueue(queue* q, int data) {
    node* newNode = createNode(data);
    if (!newNode) return;

    if (q->rear == NULL) {  
        q->front = newNode;
        q->rear = newNode;
        newNode->next = q->front;  
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
        q->rear->next = q->front;  
    }
    printf("Enqueued: %d\n", data);
}


int dequeue(queue* q) {
    if (q->front == NULL) { 
        printf("Queue underflow\n");
        return -1;
    }

    int data;
    if (q->front == q->rear) {  
        data = q->front->data;
        free(q->front);
        q->front = q->rear = NULL;
    } else {  // More than one node
        node* temp = q->front;
        data = temp->data;
        q->front = q->front->next;
        q->rear->next = q->front;  // Maintain the circular link
        free(temp);
    }
    printf("Dequeued: %d\n", data);
    return data;
}


void display(queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    node* temp = q->front;
    printf("Queue elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != q->front);  
    printf("\n");
}


int isEmpty(queue* q) {
    return (q->front == NULL);
}

int main() {
    queue* q = createQueue();
    int choice, data;

    do {
        printf("\nCircular Queue operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to enqueue: ");
                scanf("%d", &data);
                enqueue(q, data);
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
