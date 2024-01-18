#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Pre Order Traversal
void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Post Order Traversal
void postOrder(Node *root)
{
    if (root == NULL)
        return;
    preOrder(root->left);
    preOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    // Creat Nodes Manualy
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(90);
    Node *d = new Node(70);
    Node *e = new Node(50);
    Node *f = new Node(40);
    Node *g = new Node(90);
    Node *h = new Node(60);
    Node *i = new Node(30);
    Node *j = new Node(30);
    Node *k = new Node(70);

    // Cunnect All Nodes
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    d->right = h;
    h->left = j;
    h->right = k;
    b->right = e;
    e->left = f;
    e->right = g;
    g->left = i;

    // Call Pre Order Traversal Function
    preOrder(root);

    cout << endl
         << endl;

    // Call Post Order Traversal Function
    postOrder(root);

    cout << endl
         << endl;
    return 0;
}