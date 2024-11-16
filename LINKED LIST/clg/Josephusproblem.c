#include <stdio.h>
#include <stdlib.h>
int i;

typedef struct Node {
    int data;
    struct Node* next;
} node;

node* create_node(int data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// void delete_node(node** head, node* prev) {
//     node* to_delete = prev->next;

//     if (to_delete == *head) {  // If the head is being deleted
//         *head = (*head)->next;  // Update the head to the next node
//     }

//     prev->next = to_delete->next;
//     free(to_delete);
// }

node* create_circle(int size) {
    if (size < 1) return NULL;

    node* head = create_node(1);
    node* temp = head;
    for ( i = 2; i <= size; i++) {
        node* new_node = create_node(i);
        temp->next = new_node;
        temp = new_node;
    }
    temp->next = head;  // Link back to the head to form a circle
    return head;
}

void print_list(node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    node* temp = head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void josephus(node** head, int k) {
    if (*head == NULL) return;

    node* current = *head;
    node* prev = NULL;

    while (current->next!=current) {  // Continue until one node is left
        for ( i = 1; i < k; i++) {   // Step k times
            prev = current;
            current = current->next;
        }
        printf("Node %d is eliminated\n", current->data);
        
  prev->next = current->next; // Bypass the current node
        if (current == *head) {      // If the head is eliminated, update it
            *head = current->next;
        }
        free(current);     // Delete the node after prev
        printf("Now the circle contains: ");
      
        current = prev->next;
          print_list(*head);           // Move to the next node
    }
    printf("The winner is: %d\n", current->data);
}

int main() {
    printf("Enter the number of people in the circle: ");
    int n;
    scanf("%d", &n);

    node* head = create_circle(n);
    printf("Circular linked list: ");
    print_list(head);

    printf("Enter the step count for Josephus problem: ");
    int k;
    scanf("%d", &k);

    josephus(&head, k);

    return 0;
}
