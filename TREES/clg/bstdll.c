#include <stdio.h>
#include <stdlib.h>

// Structure of a node in the BST (also used as a node in the DLL)
typedef struct Node {
    int data;
    struct Node* left;  // Will serve as 'prev' in the DLL
    struct Node* right; // Will serve as 'next' in the DLL
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the BST
Node* insert(Node* root, int data) {
    if (root == NULL) return createNode(data);

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Helper function to convert BST to DLL
void bstToDllUtil(Node* root, Node** head, Node** prev) {
    if (root == NULL) return;

    // Recursively convert the left subtree
    bstToDllUtil(root->left, head, prev);

    // Convert the current node
    if (*prev == NULL) {
        // First node (smallest element) becomes head of DLL
        *head = root;
    } else {
        // Set up previous and next pointers for DLL
        root->left = *prev;
        (*prev)->right = root;
    }
    // Update prev pointer to the current node
    *prev = root;

    // Recursively convert the right subtree
    bstToDllUtil(root->right, head, prev);
}

// Main function to convert BST to DLL
Node* convertBstToDll(Node* root) {
    Node* head = NULL; // Head of the DLL
    Node* prev = NULL; // Previous node in the DLL

    // Convert BST to DLL using the helper function
    bstToDllUtil(root, &head, &prev);

    return head; // Return the head of the DLL
}

// Function to print the doubly linked list
void printDoublyLinkedList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->right;
    }
    printf("\n");
}

// Main function to demonstrate the functionality
int main() {
    Node* root = NULL;
    int n, data;

    // Input the number of nodes
    printf("Enter the number of nodes in the BST: ");
    scanf("%d", &n);

    // Input each node and insert it into the BST
    printf("Enter the nodes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    // Convert the BST to a DLL
    Node* head = convertBstToDll(root);

    // Print the DLL
    printf("Doubly Linked List in sorted order:\n");
    printDoublyLinkedList(head);

    return 0;
}
