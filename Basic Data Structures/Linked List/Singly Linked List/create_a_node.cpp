#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node a, b, c;

    a.data = 10;
    b.data = 20;
    c.data = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    // cout << a.data << " " << b.data << " " << c.data << endl;
    // cout << &a << " " << &b << " " << &c << endl;
    // cout << a.next << " " << b.next << " " << c.next << endl;

    cout << (*a.next).data << endl;
    cout << a.next->data << endl;
    cout << b.next->data << endl;

    return 0;
}