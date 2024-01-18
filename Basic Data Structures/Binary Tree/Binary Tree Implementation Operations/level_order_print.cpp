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

// This is Level Order Function
void print_level_order(Node *root)
{
    // Creat a Queue (Line) and Print Left to Right
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // Copy first in f from q
        Node *f = q.front();

        // Remove q's first element
        q.pop();

        // Print the Data of f
        cout << f->data << " ";

        // Set the Left and Right Node in q of f
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
    cout << endl;

    // Creat a Queue (Line) and Print Right to Left
    queue<Node *> q2;
    q2.push(root);

    while (!q2.empty())
    {
        // Copy first in f from q2
        Node *f = q2.front();

        // Remove q2's first element
        q2.pop();

        // Print the Data of f
        cout << f->data << " ";

        // Set the Left and Right Node in q2 of f
        if (f->right != NULL)
            q2.push(f->right);
        if (f->left != NULL)
            q2.push(f->left);
    }
    cout << endl;
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

    // Call Print Level Order Function
    print_level_order(root);

    return 0;
}