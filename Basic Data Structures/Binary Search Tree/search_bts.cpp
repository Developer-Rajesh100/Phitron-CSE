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

// Input in Binary Tree
Node *input_tree()
{
    int val;
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;

        if (l != -1)
        {
            front->left = new Node(l);
            q.push(front->left);
        }
        if (r != -1)
        {
            front->right = new Node(r);
            q.push(front->right);
        }
    }
    return root;
}

// Binary Search Tree
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    if (root->data > x)
        return search(root->left, x);
    if (root->data < x)
        return search(root->right, x);
    return false;
}

int main()
{
    Node *root = input_tree();

    search(root, 20) ? cout << "YES, Found" << endl : cout << "NO, Not Found" << endl;

    return 0;
}