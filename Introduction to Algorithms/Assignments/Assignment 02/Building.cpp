#include <bits/stdc++.h>
using namespace std;
int const N = 1e5 + 5;
int parent[N];
int len[N];

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
        len[i] = 1;
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

    if (len[l1] < len[l2])
        swap(l1, l2);
    parent[l2] = l1;
    len[l1] += len[l2];
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<edge> edges;
    create(n);

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(edge(u, v, w));
    }

    sort(edges.begin(), edges.end(), cmp);
    long long int cost = 0;

    for (edge i : edges)
    {
        if (find(i.u) == find(i.v))
            continue;
        dsu_union(i.u, i.v);
        cost += i.w;
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (parent[i] == -1)
            cnt++;
    }

    if ((cnt > 1) || (cnt < 1))
        cout << "-1" << endl;

    else
        cout << cost << endl;
    return 0;
}