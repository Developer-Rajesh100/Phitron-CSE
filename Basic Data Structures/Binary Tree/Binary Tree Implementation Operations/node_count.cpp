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
// This is Level Order Input Function
Node *input_level_order()
{
    // Input root data
    int data;
    cin >> data;

    // Create a root and set data
    Node *root;

    if (data == -1)
        root = NULL;
    else
        root = new Node(data);

    // Create a q (List)
    queue<Node *> q;

    // root push in q
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        // Input Left and Right Node
        int leftNode, rightNode;
        cin >> leftNode >> rightNode;

        // Create Left and Right Node
        Node *newLeft;
        Node *newRight;

        // Check Left and Right Node value -1 or not
        if (leftNode == -1)
            newLeft = NULL;
        else
            newLeft = new Node(leftNode);

        if (rightNode == -1)
            newRight = NULL;
        else
            newRight = new Node(rightNode);

        // Connect the Children Nodes
        p->left = newLeft;
        p->right = newRight;

        // Child push on q
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

// This is Node Count Function
int count(Node *root)
{
    // Basecase
    if (root == NULL)
        return 0;

    // Call Recursion Function for Left and Right sub-nodes
    int left = count(root->left);
    int right = count(root->right);

    // Return the Result
    return (left + right + 1);
}

int main()
{
    Node *root = input_level_order();

    // Call Print Node Count Function
    cout << "The Number of Node are :- " << count(root) << endl;

    return 0;
}