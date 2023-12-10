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

// This is Delete Node Function
void delete_node(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
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

// Delete Head Function
void delete_head(Node *&head)
{
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
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

    // Print Function Call
    print_linked_list(head);

    cout << endl;

    int pos;
    cin >> pos;

    if (size(head) < pos)
    {
        cout << "Invalied Position" << endl;
        return 0;
    }
    else
    {
        if (pos == 1)
        {
            // Delete Head Function Call
            delete_head(head);
            print_linked_list(head);
            cout << endl;
            return 0;
        }

        else
        {
            // Delete Node Function Call
            delete_node(head, pos);

            // Recall Print Function
            print_linked_list(head);
            cout << endl;
        }
    }

    return 0;
}