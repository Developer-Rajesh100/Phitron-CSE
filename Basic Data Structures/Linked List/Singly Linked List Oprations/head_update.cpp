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

// This is New Node Insert Function at Any Position
void insert(Node *head, int pos, int data)
{
    Node *newNode = new Node(data);
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

// Linked List Length || Size
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

// Linked List Head Update
void insert_head(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
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

    // Call Insert Function
    int pos, data;
    cin >> pos >> data;

    if (pos > size(head))
    {
        cout << "Invalid Position" << endl;
    }
    else if (pos == 1 || pos == 0)
    {
        insert_head(head, data);
    }

    else
    {
        insert(head, pos, data);
    }

    // Call Linked List Print Function
    print_linked_list(head);

    return 0;
}