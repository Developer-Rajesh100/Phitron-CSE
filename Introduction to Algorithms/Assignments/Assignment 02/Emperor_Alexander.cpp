#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 5;
long long int parent[N];
long long int s[N];

class edge
{
public:
    int u, v, w;
    edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(edge a, edge b)
{
    return a.w < b.w;
}

void create(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        s[i] = 1;
    }
}

int find(int n)
{
    if (parent[n] == -1)
        return n;
    return parent[n] = find(parent[n]);
}

void dsu_union(int n1, int n2)
{
    int l1 = find(n1);
    int l2 = find(n2);

    if (s[l1] < s[l2])
        swap(l1, l2);

    parent[l2] = l1;
    s[l1] += s[l2];
}

int main()
{
    int n, e;
    cin >> n >> e;

    create(n);
    vector<edge> edges;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(edge(u, v, w));
    }

    sort(edges.begin(), edges.end(), cmp);
    int del = 0;
    long long int cost = 0;

    for (edge i : edges)
    {
        if (find(i.u) == find(i.v))
        {
            del++;
            continue;
        }
        dsu_union(i.u, i.v);
        cost += i.w;
    }

    int node = 0;

    for (int i = 1; i <= n; i++)
        if (parent[i] == -1)
            node++;

    (node > 1) ? cout << "Not Possible" << endl : cout << del << " " << cost << endl;

    return 0;
}