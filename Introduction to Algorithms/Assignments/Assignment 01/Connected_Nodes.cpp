#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> adj[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int que;
    cin >> que;

    while (que--)
    {
        int ind;
        cin >> ind;

        sort(adj[ind].begin(), adj[ind].end(), greater<int>());

        if (adj[ind].size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < adj[ind].size(); i++)
            {
                cout << adj[ind][i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}