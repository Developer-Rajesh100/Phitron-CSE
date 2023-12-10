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

    tail->next = newNode;
    tail = newNode;
}

// Minimum And Maximum Value Difference
int min_max_difference(Node *head)
{
    Node *tmp = head;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    while (tmp != NULL)
    {
        if (min_val > tmp->data)
        {
            min_val = tmp->data;
        }
        if (max_val < tmp->data)
        {
            max_val = tmp->data;
        }
        tmp = tmp->next;
    }

    return max_val - min_val;
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

    if (size(head) == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        cout << min_max_difference(head);
    }

    return 0;
}
*/

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

// Minimum And Maximum Value Difference
int min_max_difference(Node *head)
{
    Node *tmp = head;
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    while (tmp != NULL)
    {
        if (min_val > tmp->data)
        {
            min_val = tmp->data;
        }
        if (max_val < tmp->data)
        {
            max_val = tmp->data;
        }
        tmp = tmp->next;
    }

    return max_val - min_val;
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

    if (size(head) == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << min_max_difference(head);
    }

    return 0;
}
