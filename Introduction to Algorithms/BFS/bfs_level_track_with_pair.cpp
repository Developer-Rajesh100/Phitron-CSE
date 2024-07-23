#include <bits/stdc++.h>
using namespace std;

vector<int> v[1000];
int vis[1000];

void bfs_level_pair(int src, int des)
{
    queue<pair<int, int>> q;

    q.push({src, des});
    vis[src] = true;
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

    int src, des;
    cin >> src >> des;

    bfs_level_pair(src, des);

    return 0;
}