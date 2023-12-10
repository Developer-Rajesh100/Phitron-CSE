#include <bits/stdc++.h>
using namespace std;

// This is Node Class
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

// This is Linked List Print Finction
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
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

    // Call Linked List Print Function
    print_linked_list(head);

    return 0;
}