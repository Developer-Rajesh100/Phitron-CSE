#include <bits/stdc++.h>
using namespace std;
int const N = 1e4;
char grid[N][N];
bool Visit[N][N];
int n, m;
vector<pair<int, int>> direction = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
int Count;

bool isValid(int i, int j)
{
    if ((i >= 0) && (i < n) && (j >= 0) && (j < m) && (grid[i][j] != '-') && (!Visit[i][j]))
        return true;
    return false;
}

void dfs(int si, int sj)
{
    Visit[si][sj] = true;
    Count++;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + direction[i].first;
        int cj = sj + direction[i].second;

        if (isValid(ci, cj))
            dfs(ci, cj);
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

    int max = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!Visit[i][j] && (grid[i][j] == '.'))
            {
                Count = 0;
                dfs(i, j);
                max = min(max, Count);
            }
        }
    }

    if (Count == 0)
        cout << "-1" << endl;

    else
        cout << max << endl;

    return 0;
}