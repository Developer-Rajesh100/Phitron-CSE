#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration
    stack<int> st;
    queue<int> q;
    int N, M;
    cin >> N >> M;

    // Input
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        st.push(temp);
    }
    for (int i = 0; i < M; i++)
    {
        int temp;
        cin >> temp;
        q.push(temp);
    }

    // Stack and Queue Compare
    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES" << endl;

    return 0;
}
