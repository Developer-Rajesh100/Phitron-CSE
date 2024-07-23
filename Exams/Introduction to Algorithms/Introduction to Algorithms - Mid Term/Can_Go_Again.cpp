#include <bits/stdc++.h>
#define ll long long int
#define lm LLONG_MAX
long long int dis[1001];

using namespace std;

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
        dis[i] = lm;
    }

    int src;
    cin >> src;
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (edge ed : edge_list)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            if (dis[u] < lm && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool cycle = false;

    for (edge e : edge_list)
    {
        int u, v, c;
        u = e.u;
        v = e.v;
        c = e.c;

        if (dis[u] < lm && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle == true)
        cout << "Negative Cycle Detected" << endl;

    else
    {
        int query;
        cin >> query;

        while (query--)
        {
            int d;
            cin >> d;

            if (d > 0 && d <= n && dis[d] < lm)
            {
                cout << dis[d] << endl;
            }
            else
            {
                cout << "Not Possible" << endl;
            }
        }
    }

    return 0;
}