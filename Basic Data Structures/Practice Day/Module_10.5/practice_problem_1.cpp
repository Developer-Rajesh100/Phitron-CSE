#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
// Size of Linked List
int size_list(Node *head)
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

// This is Insert Function
void insert(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

// This is Print Function
void print_node(Node *head)
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
    // These are First Nodes
    Node *head = NULL;
    Node *tail = NULL;

    // These are Second Nodes
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int data;

    // Take Input in First Nodes
    while (true)
    {
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert(head, tail, data);
    }

    // Take Input in Second Nodes
    while (true)
    {
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert(head2, tail2, data);
    }

    // Checking this two Linked List Size Same or Not
    if (size_list(head) != size_list(head2))
    {
        cout << "NO" << endl;
        return 0;
    }

    while (head != NULL)
    {
        if (head->data == head2->data)
        {
            head = head->next;
            head2 = head2->next;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}