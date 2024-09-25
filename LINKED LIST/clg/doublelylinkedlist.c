#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

// Function to create a new node
Node* create_node(int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

// Function to insert a node at a specified position
void insert_at_position(Node** head, int data, int position) {
    Node* new_node = create_node(data);
    if (position < 1) {
        printf("Invalid position.\n");
        free(new_node);
        return;
    }

    if (*head == NULL) {
        if (position == 1) {
            *head = new_node;
        } else {
            printf("Position out of range.\n");
            free(new_node);
        }
        return;
    }

    if (position == 1) {
        new_node->next = *head;
        (*head)->prev = new_node;
        *head = new_node;
        return;
    }

    Node* temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        free(new_node);
    } else {
        new_node->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = new_node;
        }
        temp->next = new_node;
        new_node->prev = temp;
    }
}

// Function to delete a node from a specified position
void delete_at_position(Node** head, int position) {
    if (*head == NULL || position < 1) {
        printf("Invalid position.\n");
        return;
    }

    Node* temp = *head;
    if (position == 1) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < position; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }
    free(temp);
}

// Function to count the number of nodes in the linked list
int count_nodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to reverse print the linked list
void print_reverse(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
    printf("\n");
}

// Function to reverse the linked list
void reverse_list(Node** head) {
    if (*head == NULL) {
        return;
    }

    Node* temp = NULL;
    Node* current = *head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        *head = temp->prev;
    }
}

// Function to display the list
void display_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    printf("\n");
}

// Main function to drive the menu
int main() {
    Node* head = NULL;
    int choice, data, position;

    while (1) {
        printf("\nDoubly Linked List Menu:\n");
        printf("1. Insert a node at a specified position\n");
        printf("2. Delete a node from a specified position\n");
        printf("3. Count the number of nodes\n");
        printf("4. Reverse print the linked list\n");
        printf("5. Reverse the linked list\n");
        printf("6. Display the list\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &data);
                printf("Enter position to insert at (1-based index): ");
                scanf("%d", &position);
                insert_at_position(&head, data, position);
                break;
            case 2:
                printf("Enter position to delete from (1-based index): ");
                scanf("%d", &position);
                delete_at_position(&head, position);
                break;
            case 3:
                printf("Number of nodes: %d\n", count_nodes(head));
                break;
            case 4:
                printf("Reverse print of the list: ");
                print_reverse(head);
                break;
            case 5:
                reverse_list(&head);
                printf("List reversed.\n");
                break;
            case 6:
                printf("List: ");
                display_list(head);
                break;
            case 7:
                printf("Exiting...\n");
                
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
