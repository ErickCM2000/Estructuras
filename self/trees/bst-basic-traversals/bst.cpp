#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *left, *right;
    Node(char data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void preorderBst(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << endl;
    preorderBst(root->left);
    preorderBst(root->right);
}

void inorderBst(Node *root)
{
    if (root == NULL)
        return;

    inorderBst(root->left);
    cout << root->data << endl;
    inorderBst(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << endl;
}

int main()
{

    struct Node *root = new Node('F');
    root->left = new Node('B');
    root->left->left = new Node('A');
    root->left->right = new Node('D');
    root->left->right->left = new Node('C');
    root->left->right->right = new Node('E');

    root->right = new Node('G');
    root->right->right = new Node('I');
    root->right->right->left = new Node('H');

    cout << "\n\nInorder traversal" << endl;
    inorderBst(root);
    cout << "\n\nPreorder traversal" << endl;
    preorderBst(root);
    cout << "\n\nPostorder traversal" << endl;
    postOrder(root);

    return 0;
}