#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];

bool vist[N];
int parent[N];
int count_cycle = 0;

void dfs(int src)
{
    vist[src] = true;
    for (int child : adj[src])
    {
        if (vist[child] && parent[src] != child)
        {
            count_cycle++;
        }
        if (!vist[child])
        {
            parent[child] = src;
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    memset(vist, false, sizeof(vist));
    memset(parent, -1, sizeof(parent));
    dfs(1);

    cout << count_cycle / 2 << endl;
    return 0;
}