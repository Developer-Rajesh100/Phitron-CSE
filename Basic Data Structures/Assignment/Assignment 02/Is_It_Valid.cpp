#include <bits/stdc++.h>
using namespace std;

bool isYes(string &s)
{
    stack<char> stk;

    for (char ch : s)
    {
        if (ch == '0')
        {
            if (!stk.empty() && stk.top() == '1')
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
            if (!stk.empty() && stk.top() == '0')
            {
                stk.pop();
            }
            else
            {
                stk.push(ch);
            }
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

        if (isYes(s))
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

/*
#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValidString(const string &s)
{
    stack<char> stk;

    for (char ch : s)
    {
        if (ch == '0')
        {
            if (!stk.empty() && stk.top() == '1')
            {
                stk.pop();
            }
            else
            {
                stk.push(ch);
            }
        }
        else
        { // ch == '1'
            if (!stk.empty() && stk.top() == '0')
            {
                stk.pop();
            }
            else
            {
                stk.push(ch);
            }
        }
    }

    return stk.empty();
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        if (isValidString(s))
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
*/
