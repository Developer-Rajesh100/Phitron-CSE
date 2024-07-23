#include <bits/stdc++.h>
using namespace std;

bool subset_sum(vector<int> &a, int n, int t)
{
    vector<vector<bool>> dp(n + 1, vector<bool>(t + 1, false));
    dp[0][0] = true;

    for (int i = 1; i <= t; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= t; j++)
        {
            if (a[i - 1] <= j)
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];

            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    return dp[n][t];
}

int main()
{
    int Query;
    cin >> Query;

    while (Query--)
    {
        int n;
        cin >> n;

        int total = 0;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            a[i] = value;
            total += value;
        }

        if (total % 2 == 0)
            (subset_sum(a, n, total / 2)) ? cout << "YES" << endl : cout << "NO" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}