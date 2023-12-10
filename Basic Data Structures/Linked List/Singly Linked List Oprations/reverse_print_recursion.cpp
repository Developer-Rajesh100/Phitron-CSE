#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print_reverse(Node *n)
{
    // Base Case
    if (n == NULL)
        return;

    // Call Function
    print_reverse(n->next);

    // Print Data
    cout << n->data << " ";
}

int main()
{
    // Create Node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // Linked Node With Next Node Address
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // Print Reverse Function Call
    print_reverse(head);

    return 0;
}