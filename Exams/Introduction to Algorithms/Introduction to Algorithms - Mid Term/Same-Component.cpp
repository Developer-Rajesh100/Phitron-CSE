#include <bits/stdc++.h>
using namespace std;
int n, m;
char grid[1001][1001];
bool vis[1001][1001] = {false};
vector<pair<int, int>> s = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool can_go(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && !vis[i][j] && grid[i][j] == '.';
}

void dfs(int x, int y)
{
    vis[x][y] = true;
    for (auto i : s)
    {
        int a = x + i.first, b = y + i.second;
        if (can_go(a, b))
            dfs(a, b);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    int x, y;
    cin >> x >> y;

    int a, b;
    cin >> a >> b;

    dfs(x, y);

    if (vis[x][y] && vis[a][b])

        cout << "YES" << endl;

    else

        cout << "NO" << endl;

    return 0;
}