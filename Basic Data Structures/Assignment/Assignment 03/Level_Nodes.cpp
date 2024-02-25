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

int depth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = depth(root->left);
    int right = depth(root->right);
    return max(left, right) + 1;
}

// Level order traversal
void level_order(Node *root, int level)
{
    if (root == NULL)
        return;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> f = q.front();
        q.pop();
        Node *n = f.first;
        int l = f.second;
        if (l > level)
            return;
        if (l == level)
        {
            cout << n->data << " ";
        }
        if (n->left)
        {
            q.push({n->left, l + 1});
        }
        if (n->right)
        {
            q.push({n->right, l + 1});
        }
    }
}

int main()
{

    Node *root = input_tree();

    int level;
    cin >> level;

    if (level >= depth(root))
    {
        cout << "Invalid";
    }
    else
    {
        level_order(root, level);
    }

    return 0;
}

/*
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

// Print nodes at specific level
void print_nodes_at_level(Node *root, int target_level)
{
    if (root == NULL)
        return;

    queue<pair<Node *, int>> q;
    q.push({root, 1});

    while (!q.empty())
    {
        Node *front = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == target_level)
        {
            cout << front->data << " ";
        }

        if (front->left)
        {
            q.push({front->left, level + 1});
        }
        if (front->right)
        {
            q.push({front->right, level + 1});
        }
    }
}

int main()
{
    Node *root = input_tree();

    int target_level;
    cin >> target_level;

    cout << target_level << " ";
    print_nodes_at_level(root, target_level);

    return 0;
}
*/
