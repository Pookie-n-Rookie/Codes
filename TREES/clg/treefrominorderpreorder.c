<<<<<<< HEAD
// #include <stdio.h>
// #include <stdlib.h>
// # define  MAX_SIZE 1000000007

// // Definition of the TreeNode structure
// typedef struct TreeNode {
//     int val;
//     struct TreeNode* left;
//     struct TreeNode* right;
// } TreeNode;


// TreeNode* createNode(int val) {
//     TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
//     newNode->val = val;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// // Recursive function to build the tree
// TreeNode* buildTreeHelper(int* preorder, int prestart, int preend, int* inorder, int instart, int inend, int* hashmap) {
//     if (prestart > preend || instart > inend) {
//         return NULL; // Base case: no elements to construct the tree
//     }

//     // The first element in preorder is the root of the current subtree
//     int rootVal = preorder[prestart];
//     TreeNode* root = createNode(rootVal);

//     // Find the root index in the inorder array using the hash map
//     int inRootIndex = hashmap[rootVal];

//     // Number of elements in the left subtree
//     int numsLeft = inRootIndex - instart;

//     // Recursively build the left and right subtrees
//     root->left = buildTreeHelper(preorder, prestart + 1, prestart + numsLeft, inorder, instart, inRootIndex - 1, hashmap);
//     root->right = buildTreeHelper(preorder, prestart + numsLeft + 1, preend, inorder, inRootIndex + 1, inend, hashmap);

//     return root;
// }


// TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    
//     int hashmap[MAX_SIZE]; 
//     for (int i = 0; i < inorderSize; i++) {
//         hashmap[inorder[i]] = i;
//     }

//     return buildTreeHelper(preorder, 0, preorderSize - 1, inorder, 0, inorderSize - 1, hashmap);
// }


// void printInorder(TreeNode* root) {
//     if (root == NULL) {
//         return;
//     }
//     printInorder(root->left);
//     printf("%d ", root->val);
//     printInorder(root->right);
// }
// void printroot(TreeNode* root) {
//   printf("%d ", root->val);}

// int main() {
//     int preorder[] = {3, 9, 20, 15, 7};
//     int inorder[] = {9, 3, 15, 20, 7};
//     int size = sizeof(preorder) / sizeof(preorder[0]);

//     TreeNode* root = buildTree(preorder, size, inorder, size);

//     printf("the root of the tree is: ");
//     printroot(root);

//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

// Definition of the Node structure
typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node
Node* createNode(char data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to find the index of a value in the In-order array
int search(char arr[], int start, int end, char value) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

// Function to construct the binary tree from In-order and Pre-order sequences
Node* buildTree(char inOrder[], char preOrder[], int inStart, int inEnd, int* preIndex) {
    // Base case
    if (inStart > inEnd) {
        return NULL;
    }

    // Pick the current node from Pre-order as the root and increment preIndex
    Node* root = createNode(preOrder[*preIndex]);
    (*preIndex)++;

    // If this node has no children, return it
    if (inStart == inEnd) {
        return root;
    }

    // Find the index of this node in In-order traversal
    int inIndex = search(inOrder, inStart, inEnd, root->data);

    // Construct the left and right subtrees
    root->left = buildTree(inOrder, preOrder, inStart, inIndex - 1, preIndex);
    root->right = buildTree(inOrder, preOrder, inIndex + 1, inEnd, preIndex);

    return root;
}

// Function for in-order traversal to verify the constructed tree
void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%c ", root->data);
        inorderTraversal(root->right);
    }
}

// Main function to test the algorithm
int main() {
    char inOrder[] = {'D', 'B', 'E', 'A', 'F', 'C'};
    char preOrder[] = {'A', 'B', 'D', 'E', 'C', 'F'};
    int length = sizeof(inOrder) / sizeof(inOrder[0]);

    // Initialize preIndex to 0
    int preIndex = 0;

    // Build the tree
    Node* root = buildTree(inOrder, preOrder, 0, length - 1, &preIndex);

    // Display in-order traversal of the constructed tree to verify
    printf("In-order traversal of the constructed tree: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}



=======
#include <stdio.h>
#include <stdlib.h>
# define  MAX_SIZE 1000000007

// Definition of the TreeNode structure
typedef struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// Helper function to create a new TreeNode
TreeNode* createNode(int val) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Recursive function to build the tree
TreeNode* buildTreeHelper(int* preorder, int prestart, int preend, int* inorder, int instart, int inend, int* hashmap) {
    if (prestart > preend || instart > inend) {
        return NULL; // Base case: no elements to construct the tree
    }

    // The first element in preorder is the root of the current subtree
    int rootVal = preorder[prestart];
    TreeNode* root = createNode(rootVal);

    // Find the root index in the inorder array using the hash map
    int inRootIndex = hashmap[rootVal];

    // Number of elements in the left subtree
    int numsLeft = inRootIndex - instart;

    // Recursively build the left and right subtrees
    root->left = buildTreeHelper(preorder, prestart + 1, prestart + numsLeft, inorder, instart, inRootIndex - 1, hashmap);
    root->right = buildTreeHelper(preorder, prestart + numsLeft + 1, preend, inorder, inRootIndex + 1, inend, hashmap);

    return root;
}

// Main function to build the tree from preorder and inorder traversals
TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    // Create a hash map to store the index of each element in the inorder array
    int hashmap[MAX_SIZE]; // Assume values are in the range [0, 1000]
    for (int i = 0; i < inorderSize; i++) {
        hashmap[inorder[i]] = i;
    }

    return buildTreeHelper(preorder, 0, preorderSize - 1, inorder, 0, inorderSize - 1, hashmap);
}

// Function to print the tree in Inorder (for testing)
void printInorder(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printInorder(root->left);
    printf("%d ", root->val);
    printInorder(root->right);
}
void printroot(TreeNode* root) {
  printf("%d ", root->val);}

int main() {
    int preorder[] = {3, 9, 20, 15, 7};
    int inorder[] = {9, 3, 15, 20, 7};
    int size = sizeof(preorder) / sizeof(preorder[0]);

    TreeNode* root = buildTree(preorder, size, inorder, size);

    printf("the root of the tree is: ");
    printroot(root);

    return 0;
}
>>>>>>> a2bcbb72b690dadde375486ca223f8692adc0ffb
