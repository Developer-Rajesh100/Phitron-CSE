#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> v;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        v.push(x);
    }

    int Q;
    cin >> Q;

    while (Q--)
    {
        int commend;
        cin >> commend;

        if (commend == 0)
        {
            int num;
            cin >> num;
            v.push(num);
            cout << v.top() << endl;
        }
        else if (commend == 1)
        {
            if (v.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {

                cout << v.top() << endl;
            }
        }
        else if (commend == 2)
        {
            if (v.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                v.pop();
                if (v.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << v.top() << endl;
                }
            }
        }
    }

    return 0;
}
