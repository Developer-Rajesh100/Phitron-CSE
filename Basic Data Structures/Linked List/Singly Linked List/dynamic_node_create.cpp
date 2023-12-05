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

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);

    head->next = second;

    cout << head->data << " " << second->data << endl;
    cout << head->next << " " << second << " " << second->next << endl;
    cout << head->next->data << endl;

    return 0;
}