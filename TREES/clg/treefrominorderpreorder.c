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
