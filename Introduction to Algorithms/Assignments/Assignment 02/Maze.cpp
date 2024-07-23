#include <bits/stdc++.h>
using namespace std;
char grid[1001][1001];
bool visit[1001][1001];
pair<int, int> way[1001][1001];
vector<pair<int, int>> step = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool isPossible(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#' && !visit[i][j])
        return true;
    return false;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    visit[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> pr = q.front();
        q.pop();
        int xi = pr.first;
        int xj = pr.second;
        if (grid[xi][xj] == 'D')
            return;

        for (int i = 0; i < 4; i++)
        {
            int ci = xi + step[i].first;
            int cj = xj + step[i].second;

            if (isPossible(ci, cj))
            {
                q.push({ci, cj});
                visit[ci][cj] = true;
                way[ci][cj] = {step[i].first, step[i].second};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, desti, destj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            visit[i][j] = false;

            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }

            if (grid[i][j] == 'D')
            {
                desti = i;
                destj = j;
            }
        }
    }

    bfs(si, sj);
    if (visit[desti][destj])
    {
        vector<pair<int, int>> v;

        while (desti != si || destj != sj)
        {
            v.push_back({way[desti][destj].first, way[desti][destj].second});
            desti -= v.back().first;
            destj -= v.back().second;
            if (grid[desti][destj] != 'R')
                grid[desti][destj] = 'X';
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << grid[i][j];
            cout << endl;
        }
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << grid[i][j];
            cout << endl;
        }
    }
    return 0;
}