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

// Input in binary tree
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

vector<int> v1;
void left_nodes(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        left_nodes(root->left);
    }
    else
    {
        left_nodes(root->right);
    }
    v1.push_back(root->data);
}

vector<int> v2;
void right_nodes(Node *root)
{
    if (root == NULL)
        return;

    v2.push_back(root->data);

    if (root->right)
    {
        right_nodes(root->right);
    }
    else
    {
        right_nodes(root->left);
    }
}

int main()
{

    Node *root = input_tree();
    left_nodes(root->left);
    right_nodes(root->right);

    for (int val : v1)
    {
        cout << val << " ";
    }
    cout << root->data << " ";
    for (int val : v2)
    {
        cout << val << " ";
    }

    return 0;
}
