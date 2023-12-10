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

// Insert at Tail Function
void insert_at_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

// Insert ar Any Position
void insert_at_any_position(Node *head, int pos, int data)
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

// Print Linked List Finction
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

    while (true)
    {
        cout << endl
             << "Press 1 For Insert at Tail" << endl;
        cout << "Press 2 For Print" << endl;
        cout << "Press 3 Insert at Ant Position" << endl;
        cout << "Press 0 For Break" << endl;

        int position;
        cout << endl
             << "Enter your Choice : ";
        cin >> position;

        switch (position)
        {
        case 0:
        {
            return 0;
        }
        case 1:
        {
            int data;
            cout << endl
                 << "Enter Data : ";
            cin >> data;
            insert_at_tail(head, tail, data);
            break;
        }
        case 2:
        {
            cout << endl
                 << "The Data is : ";
            print_linked_list(head);
            cout << endl;
            break;
        }

        case 3:
        {
            int pos, data;
            cout << endl
                 << "Enter Position : ";
            cin >> pos;
            cout
                << "Enter Data : ";
            cin >> data;
            insert_at_any_position(head, pos, data);
        }

            // default:
            //     break;
        }
    }

    return 0;
}