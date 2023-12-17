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

// This is Insert at tail Function
void insert_at_tail(Node *&head, Node *&tail, int data)
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

// This is Palindrome or Not cheacking Fungtion
bool isPalindrome(Node *head)
{
    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    while (head != tmp)
    {
        if (head->data != tmp->data)
        {
            return false;
        }

        head = head->next;
        tmp = tmp->prev;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;

    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, tail, value);
    }

    (isPalindrome(head)) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}