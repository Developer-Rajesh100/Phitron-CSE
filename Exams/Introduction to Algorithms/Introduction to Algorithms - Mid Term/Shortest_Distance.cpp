#include <bits/stdc++.h>
#define ll long long int
#define LM LLONG_MAX
using namespace std;

int main()
{
    ll n, e;
    cin >> n >> e;

    ll adj[n + 1][n + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = LM;
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c < adj[a - 1][b - 1])
            adj[a - 1][b - 1] = c;
    }

    // Floyd Warshal

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] < LM && adj[k][j] < LM)
                {
                    if (adj[i][k] + adj[k][j] < adj[i][j])
                    {
                        adj[i][j] = adj[i][k] + adj[k][j];
                    }
                }
            }
        }
    }

    int query;
    cin >> query;

    while (query--)
    {
        int x, y;
        cin >> x >> y;

        if (adj[x - 1][y - 1] < LM && x - 1 < n && y - 1 < n)
            cout << adj[x - 1][y - 1] << endl;

        else
            cout << "-1" << endl;
    }

    return 0;
}