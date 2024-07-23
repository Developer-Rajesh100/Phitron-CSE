#include <bits/stdc++.h>
using namespace std;

// Declear size number of maximum nodes && Adjacency List && A Array of visited node store
const int NODE_MAX_SIZE = 1e5 + 5;
vector<int> v[NODE_MAX_SIZE];
bool vis[NODE_MAX_SIZE];

// This is BFS Function
void bfs(int src)
{
    cout << src << endl;
    vis[src] = true;

    for (auto child : v[src])
    {
        if (!vis[child])
            bfs(child);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    bfs(0);

    return 0;
}