#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int> adja_list[N];
bool vis[N];
int parentArray[N];
bool ans = false;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        // cout << parent << " ";
        q.pop();
        for (auto child : adja_list[parent])
        {
            if (vis[child] && parentArray[parent] != child)
                ans = true;
            if (!vis[child])
            {
                vis[child] = true;
                parentArray[child] = parent;
                q.push(child);
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
        adja_list[a].push_back(b);
        adja_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            bfs(i);
    }

    cout << (ans ? "Yes, Cycle Found!" : "No, Cycle Not Found!") << endl;

    return 0;
}