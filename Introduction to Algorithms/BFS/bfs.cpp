#include <bits/stdc++.h>
using namespace std;

vector<int> v[1000];
bool vis[1000];

void bfs(int src)
{
    // Create a Line
    queue<int> q;

    // Push the src in this  Queue and mark it visited
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {

        int first = q.front();
        q.pop();
        cout << first << " ";
        for (auto child : v[first])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
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

    int src;
    cin >> src;
    bfs(src);

    return 0;
}