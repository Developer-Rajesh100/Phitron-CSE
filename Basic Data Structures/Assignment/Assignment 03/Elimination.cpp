#include <bits/stdc++.h>
using namespace std;

bool isEmpty(string &s)
{
    stack<char> stk;

    for (char ch : s)
    {
        if (ch == '1')
        {
            if (!stk.empty() && stk.top() == '0')
            {
                stk.pop();
            }
            else
            {
                stk.push(ch);
            }
        }
        else
        {
            stk.push(ch);
        }
    }

    if (stk.empty())
        return true;
    else
        return false;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        if (isEmpty(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}