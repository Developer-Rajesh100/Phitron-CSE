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

// Remove Duplicates from Linked List
void remove_duplicates(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {
            if (i->data == j->next->data)
            {
                Node *temp = j->next;
                j->next = j->next->next;
                delete temp;
            }
            else
            {
                j = j->next;
            }
        }
    }
}

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
    Node *head = NULL;
    Node *tail = NULL;

    int data;

    while (true)
    {
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert_tail(head, tail, data);
    }

    remove_duplicates(head);
    print_linked_list(head);

    return 0;
}

/*
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

// Remove Duplicates from Linked List
void remove_duplicates(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {
            if (i->data == j->next->data)
            {
                Node *temp = j->next;
                j->next = j->next->next;
                delete temp;
            }
            else
            {
                j = j->next;
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int data;

    while (true)
    {
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert_tail(head, tail, data);
    }

    remove_duplicates(head);

    print_linked_list(head);

    return 0;
}

*/