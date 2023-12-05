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
    Node a(10), b(20), c(30);

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // cout << a.data << " " << b.data << " " << c.data << endl;
    // cout << &a << " " << &b << " " << &c << endl;
    // cout << a.next << " " << b.next << " " << c.next << endl;

    cout << a.data << " " << a.next->data << " " << b.next->data << endl;

    return 0;
}