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

// Search Function For Target
int search(Node *head, int target)
{
    Node *tmp = head;
    int pos = 0;

    while (tmp != NULL)
    {
        if (target == tmp->data)
            return pos;
        tmp = tmp->next;
        pos++;
    }

    return -1;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
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

        int target;
        cin >> target;

        // Call Search Function
        cout << search(head, target) << endl;
    }

    return 0;
}
