#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} node;

typedef struct queue {
    node* rear;
    node* front;
} queue;

// Function to create a new node
node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create an empty queue
queue* createQueue() {
    queue* q = (queue*)malloc(sizeof(queue));
    if (q == NULL) {
        printf("Memory error\n");
        return NULL;
    }
    q->front = q->rear = NULL;
    return q;
}

// Function to enqueue an element 
void enqueue(queue* q, int data) {
    node* newNode = createNode(data);
    if (newNode == NULL) {
        printf("Queue overflow\n");
        return;
    }
    if (q->rear == NULL) {
        q->front = newNode;
    } else {
        q->rear->next = newNode;
    }
    q->rear = newNode;
}

// Function to dequeue an element
int dequeue(queue* q) {
    if (q->front == NULL) {
        printf("Queue underflow\n");
        return -1;
    }
    int data = q->front->data;
    node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return data;
}

// Function to display the queue
void display(queue* q) {
    node* temp = q->front;
    if (temp == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to check if the queue is empty
int isempty(queue* q) {
    return q->front == NULL;
}

// Function to free the queue
void freeQueue(queue* q) {
    while (!isempty(q)) {
        dequeue(q);
    }
    free(q);
}

int main() {
    queue* q = createQueue();
    if (q == NULL) {
        return 1; // Exit if memory allocation failed
    }

    int choice, data;
    do {
        printf("\nQueue operations:\n");
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
                data = dequeue(q);
                if (data != -1) {
                    printf("Dequeued item is: %d\n", data);
                }
                break;
            case 3:
                display(q);
                break;
            case 4:
                printf("Exiting...\n");
                freeQueue(q); // Clean up memory
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
