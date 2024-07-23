#include <bits/stdc++.h>
using namespace std;

bool marks(const vector<int> &markList, int n, int m)
{
    vector<vector<bool>> dp(n + 1, vector<bool>(m + 1, false));
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (markList[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - markList[i - 1]] || dp[i - 1][j];

            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][m];
}

int main()
{
    int Query;
    cin >> Query;

    while (Query--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> markList(n);

        for (int i = 0; i < n; i++)
            cin >> markList[i];

        if (marks(markList, n, 1000 - m))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}