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

// Linked List Head Update
void insert_head(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

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

// Delete Head

void delete_head(Node *&head)
{
    if (head == NULL)
        return;

    Node *temp = head;
    head = head->next;
    delete temp;
}

// This is Delete Node Function
void delete_node(Node *&head, int pos)
{
    if (head == NULL)
        return;

    if (pos == 0)
    {
        delete_head(head);
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos - 2 && tmp != NULL; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
        return;

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    int len = 0;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X, V;

        if (X == 0)
        {
            insert_head(head, V);
            len++;
        }
        else if (X == 1)
        {
            insert_tail(head, tail, V);
            len++;
        }
        else
        {
            if (V > len)

                print_linked_list(head);

            else
                delete_node(head, V);
        }

        print_linked_list(head);
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
        next = NULL;
    }
};

// Insert At Tail Function
void insert_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // tail->next = newNode;
    // tail = newNode;
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
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
    cout << endl;
}

// Insert At Head Function
void insert_head(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// This is Delete Node Function
void delete_node(Node *&head, int pos)
{
    if (head == NULL)
        return;

    if (pos == 0)
    {
        Node *deleteHead = head;
        head = head->next;
        delete deleteHead;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL)
        return;

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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

    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_head(head, V);
        }
        else if (X == 1)
        {
            insert_tail(head, tail, V);
        }
        else
        {
            if (V > size(head))
            {
                print_linked_list(head);
                continue;
            }
            else
            {
                delete_node(head, V);
            }
        }
        print_linked_list(head);
    }

    return 0;
}

/*
     switch (X)
        {
        case 0:
        {
            insert_head(head, V);
            break;
        }

        case 1:
        {
            insert_tail(head, tail, V);
        }

        case 2:
        {
            if (V > size(head))
            {
                print_linked_list(head);
                continue;
            }
            else
            {
                delete_node(head, V);
            }
        }
            print_linked_list(head);
        }
*/
