#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1005;
char grid[MAX_N][MAX_N];
bool vis[MAX_N][MAX_N];
int rows, cols;
int start_row, start_col;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j)
{
    if (i >= 0 && i < rows && j >= 0 && j < cols && grid[i][j] != '#')
        return true;
    return false;
}

bool dfs(int si, int sj)
{
    if (grid[si][sj] == 'B')
        return true;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (isValid(ci, cj) && !vis[ci][cj])
        {
            if (dfs(ci, cj))
                return true;
        }
    }
    return false;
}

int main()
{
    cin >> rows >> cols;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                start_row = i;
                start_col = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    dfs(start_row, start_col) ? cout << "YES" : cout << "NO" << endl;

    return 0;
}