#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int Q;
    cin >> Q;

    while (Q--)
    {
        string command;
        cin >> command;

        if (command == "1" && q.empty())
        {
            cout << "Invalid" << endl;
        }
        else if (command == "1")
        {
            cout << q.front() << endl;
            q.pop();
        }
        else
        {
            string temp;
            cin >> temp;
            q.push(temp);
        }
    }

    return 0;
}
