#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* create_Head(int data) {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = data;
    head->next = NULL;
    return head;
}

void insertnode(Node** head, int data, int position) {
    // Allocate memory for the new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    
    newNode->data = data;
    newNode->next = NULL;
    
    // Handle insertion at the head (position 0)
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    
    // Traverse to the node before the desired position
    Node* temp = *head;
    for (int i = 0; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Invalid position\n");
            free(newNode); // free the allocated memory
            return;
        }
        temp = temp->next;
    }

    // If temp is NULL, position is invalid
    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode); // free the allocated memory
        return;
    }
    
    // Insert the new node
    newNode->next = temp->next;
    temp->next = newNode;
}


void delete(int data, Node** head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    if ((*head)->data == data) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    
    Node* temp = *head;
    while (temp->next != NULL && temp->next->data != data) {
        temp = temp->next;
    }
    
    if (temp->next == NULL) {
        printf("Element not found\n");
        return;
    }
    
    Node* to_delete = temp->next;
    temp->next = temp->next->next;
    free(to_delete);
}

void print_head(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void reverse_print_head(Node* head) {
    if (head == NULL)
        return;
    reverse_print_head(head->next);
    printf("%d->", head->data);
}

void reverse_head(Node** head) {
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int main() {
    Node* head = NULL;  // Initially, the list is empty
    int choice, data, position;

    do {
        printf("\nMenu:\n");
        printf("1. Create head\n");
        printf("2. Insert node\n");
        printf("3. Delete node\n");
        printf("4. Print list\n");
        printf("5. Print list in reverse\n");
        printf("6. Reverse the list\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (head != NULL) {
                    printf("Head already exists!\n");
                } else {
                    printf("Enter the data for the head node: ");
                    scanf("%d", &data);
                    head = create_Head(data);
                    printf("Head created successfully.\n");
                }
                break;

            case 2:
                if (head == NULL) {
                    printf("Create a head node first!\n");
                } else {
                    printf("Enter the data to insert: ");
                    scanf("%d", &data);
                    printf("Enter the position to insert at: ");
                    scanf("%d", &position);
                    insertnode(&head, data, position);
                    printf("Node inserted successfully.\n");
                }
                break;

            case 3:
                if (head == NULL) {
                    printf("List is empty, nothing to delete!\n");
                } else {
                    printf("Enter the data to delete: ");
                    scanf("%d", &data);
                    delete(data, &head);
                }
                break;

            case 4:
                if (head == NULL) {
                    printf("List is empty!\n");
                } else {
                    printf("List: ");
                    print_head(head);
                }
                break;

            case 5:
                if (head == NULL) {
                    printf("List is empty!\n");
                } else {
                    printf("List in reverse: ");
                    reverse_print_head(head);
                    printf("NULL\n");
                }
                break;

            case 6:
                if (head == NULL) {
                    printf("List is empty!\n");
                } else {
                    reverse_head(&head);
                    printf("List reversed successfully.\n");
                }
                break;

            case 7:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}

