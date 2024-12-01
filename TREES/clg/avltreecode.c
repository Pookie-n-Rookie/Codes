#include <stdio.h>
#include <stdlib.h>

// Typedef the structure to use Node directly
typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
} Node;

int getHeight(Node *n) {
    if (n == NULL)
        return 0;
    return n->height;
}

Node *createNode(int key) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

int maxi(int a, int b) {
    return (a > b) ? a : b;
}

int getBalanceFactor(Node *n) {
    if (n == NULL) {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

Node *rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = maxi(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = maxi(getHeight(y->left), getHeight(y->right)) + 1;

    return x;
}

Node *leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = maxi(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = maxi(getHeight(y->left), getHeight(y->right)) + 1;

    return y;
}

Node *insert(Node *node, int key) {
    if (node == NULL)
        return createNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    node->height = 1 + maxi(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);

    // Left Left Case
    if (bf > 1 && key < node->left->key) {
        return rightRotate(node);
    }
    // Right Right Case
    if (bf < -1 && key > node->right->key) {
        return leftRotate(node);
    }
    // Left Right Case
    if (bf > 1 && key > node->left->key) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // Right Left Case
    if (bf < -1 && key < node->right->key) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}

Node *minValueNode(Node *node) {
    Node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

Node *deleteNode(Node *root, int key) {
    if (root == NULL) {
        return root;
    }

    // Step 1: Perform standard BST delete
    if (key < root->key) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->key) {
        root->right = deleteNode(root->right, key);
    } else {
        // This is the node to be deleted
        if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node *temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->key = temp->key;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }

    // Step 2: Update the height of this node
    root->height = 1 + maxi(getHeight(root->left), getHeight(root->right));

    // Step 3: Get the balance factor of this node (to check whether it became unbalanced)
    int bf = getBalanceFactor(root);

    // Left Left Case
    if (bf > 1 && getBalanceFactor(root->left) >= 0) {
        return rightRotate(root);
    }
    // Right Right Case
    if (bf < -1 && getBalanceFactor(root->right) <= 0) {
        return leftRotate(root);
    }
    // Left Right Case
    if (bf > 1 && getBalanceFactor(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    // Right Left Case
    if (bf < -1 && getBalanceFactor(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void preOrder(Node *root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    Node *root = NULL;

    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);

    printf("Pre-order traversal of the constructed AVL tree is: ");
    preOrder(root);
    printf("\n");

    printf("Deleting node 4...\n");
    root = deleteNode(root, 4);
    
    printf("Pre-order traversal after deletion: ");
    preOrder(root);
    printf("\n");

    return 0;
}
