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

// Insert at Linked List's Tail
void insert_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

// This is Linked List Print Function
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
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

int main()
{
    // First Linked List
    Node *head = NULL;
    Node *tail = NULL;

    // Second Linked List
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int data;

    // Input for the first linked list
    while (true)
    {
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert_tail(head, tail, data);
    }

    // Input for the second linked list
    while (true)
    {
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert_tail(head2, tail2, data);
    }

    // Check if linked lists are of the same size
    if (size(head) != size(head2))
    {
        cout << "NO" << endl;
        return 0;
    }

    // Check if linked lists are identical
    bool isSame = true;
    while (head != NULL)
    {
        if (head->data != head2->data)
        {
            isSame = false;
            break;
        }
        head = head->next;
        head2 = head2->next;
    }

    isSame ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}
