#include <bits/stdc++.h>
using namespace std;
long long int dis[1001];

class edge
{
public:
    int u, v, c;

    edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;

    vector<edge> edge_list;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;

        edge_list.push_back(edge(u, v, c));
    }

    for (int i = 0; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }

    int src;
    cin >> src;
    dis[src] = 0;

    for (int i = 1; i < n; i++)
    {
        for (edge e : edge_list)
        {
            int u, v, c;
            u = e.u;
            v = e.v;
            c = e.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    int query;
    cin >> query;

    while (query--)
    {
        int D, Dc;
        cin >> D >> Dc;
        if ((D > 0) && (D <= n) && (dis[D] < INT_MAX) && (dis[D] <= Dc))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
    return 0;
}