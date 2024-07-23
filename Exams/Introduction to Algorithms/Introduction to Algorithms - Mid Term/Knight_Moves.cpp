#include <bits/stdc++.h>
using namespace std;
int chessboard[101][101];
bool vis[101][101];
int dis[101][101];
int n, m;

vector<pair<int, int>> direction = {{-1, 2}, {1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j] == true)
    {
        return false;
    }
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> pr = q.front();
        q.pop();
        int pi = pr.first;
        int pj = pr.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = pi + direction[i].first;
            int cj = pj + direction[i].second;

            if (valid(ci, cj))
            {
                vis[ci][cj] = true;
                dis[ci][cj] = dis[pi][pj] + 1;
                q.push({ci, cj});
            }
        }
    }
}

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {
        cin >> n >> m;

        int ki, kj;
        cin >> ki >> kj;

        int qi, qj;
        cin >> qi >> qj;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                chessboard[i][j] = 0;
            }
        }

        chessboard[qi][qj] = 1;

        memset(vis, false, sizeof(vis));

        bfs(ki, kj);

        if (vis[qi][qj])
            cout << dis[qi][qj] << endl;

        else
            cout << "-1" << endl;
    }
    return 0;
}