#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
typedef struct Node {
    int val;
    struct Node* next;
} Node;

// Define the Stack structure
typedef struct stack {
    Node* top;
} Stack;

// Initialize two stacks for the queue implementation
Stack s1 = {NULL};
Stack s2 = {NULL};

// Stack operations

// Push function to add elements to the stack
void push(int x, Stack* stack) {
    Node* newTop = (Node*)malloc(sizeof(Node));
    if (newTop == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    newTop->val = x;
    newTop->next = stack->top;
    stack->top = newTop;
}

// Function to return the top value of the stack
int top(Stack stack) {
    if (stack.top == NULL) {
        printf("Empty Stack\n");
        return -1;
    }
    return stack.top->val;
}

// Pop function to remove elements from the stack
int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    Node* temp = stack->top;
    int val = temp->val;
    stack->top = stack->top->next;
    free(temp);
    return val;
}

// Function to check if the stack is empty
int isEmpty(Stack stack) {
    return (stack.top == NULL);
}

// Queue operations using two stacks

// Enqueue function to add elements to the queue
void enqueue(int x) {
    while (!isEmpty(s1)) {
        push(top(s1), &s2);
        pop(&s1);
    }
    push(x, &s1);
    printf("Element %d enqueued\n", x); // Display the enqueued element

    while (!isEmpty(s2)) {
        push(top(s2), &s1);
        pop(&s2);
    }
}

// Dequeue function to remove elements from the queue
int dequeue() {
    if (isEmpty(s1)) {
        printf("Queue is empty\n");
        return -1;
    }
    int ele = top(s1);
    pop(&s1);
    printf("Dequeued element: %d\n", ele);
    return ele;
}

// Peek function to see the front element of the queue
int peek() {
    if (isEmpty(s1)) {
        printf("Queue is empty\n");
        return -1;
    }
    return top(s1);
}

// Function to display the queue elements without emptying it
void displayQueue() {
    if (isEmpty(s1)) {
        printf("Queue is empty\n");
        return;
    }
    
    Stack temp = {NULL}; // Temporary stack to hold elements
    printf("Queue elements are: ");

    // Transfer elements to the temporary stack for display
    while (!isEmpty(s1)) {
        int value = top(s1);
        printf("%d ", value);
        push(value, &temp);
        pop(&s1);
    }
    printf("\n");

    // Restore elements back to the original stack
    while (!isEmpty(temp)) {
        push(top(temp), &s1);
        pop(&temp);
    }
}

// Menu-driven program for the queue using two stacks
int main() {
    int choice, element;

    while (1) {
        printf("\nQueue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek (Front Element)\n");
        printf("4. Display Queue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                element = peek();
                if (element != -1)
                    printf("Front element: %d\n", element);
                break;
            case 4:
                displayQueue();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
