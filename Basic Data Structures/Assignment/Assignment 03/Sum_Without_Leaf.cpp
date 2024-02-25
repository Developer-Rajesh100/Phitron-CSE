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
Node *input_three()
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

int sum_nodes(Node *root)
{
    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        return 0;
    }

    int sum = root->data;

    sum += sum_nodes(root->left);
    sum += sum_nodes(root->right);

    return sum;
}

int main()
{
    Node *root = input_three();
    cout << sum_nodes(root);
    return 0;
}
