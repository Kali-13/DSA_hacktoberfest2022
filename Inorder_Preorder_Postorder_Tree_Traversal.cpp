// C++ program for different tree traversals
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int info;
    struct Node *left, *right;
};

// Utility function to create a new tree node
Node *newNode(int info)
{
    Node *temp = new Node;
    temp->info = info;
    temp->left = temp->right = NULL;
    return temp;
}

/* Function to print inorder traversal*/
void printInorder(struct Node *node)
{
    if (node == NULL)
        return;

    /* first recur on left child */
    printInorder(node->left);

    /* then print the data of node */
    cout << node->info << " ";

    /* now recur on right child */
    printInorder(node->right);
}
/* Function to print preorder traversal*/
void printPreorder(struct Node *node)
{
    if (node == NULL)
        return;

    /* first print data of node */
    cout << node->info << " ";

    /* then recur on left subtree */
    printPreorder(node->left);

    /* now recur on right subtree */
    printPreorder(node->right);
}
/* Function to print postorder traversal*/
void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;

    // first recur on left subtree
    printPostorder(node->left);

    // then recur on right subtree
    printPostorder(node->right);

    // then print data
    cout << node->info << " ";
}

int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    /* Binary Tree
                    1
                   /  \
                   2   3
                  / \
                 4   5

                                            */
    cout << "Inorder traversal of binary tree is:" << endl;
    printInorder(root);
    cout << "\nPreorder traversal of binary tree is:" << endl;
    printPreorder(root);
    cout << "\nPostorder traversal of binary tree is:" << endl;
    printPostorder(root);

    return 0;
}
