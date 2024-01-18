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

// This is Level Order Function
void print_level_order(Node *root)
{
    // Creat a Queue (Line) and Print Left to Right
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        if (root == NULL)
            return;

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
    Node *root = input_level_order();

    // Call Print Level Order Function
    print_level_order(root);

    return 0;
}