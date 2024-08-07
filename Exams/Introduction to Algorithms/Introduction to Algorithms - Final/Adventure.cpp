#include <bits/stdc++.h>
using namespace std;

int weight[1005];
int value[1005];
int dp[1005][1005];

int knapsack(int w, int n)
{
    if (n == 0 || w == 0)
        return 0;

    if (dp[n][w] != -1)
        return dp[n][w];

    if (weight[n - 1] <= w)
    {
        int op1 = knapsack(w - weight[n - 1], n - 1) + value[n - 1];
        int op2 = knapsack(w, n - 1);

        return dp[n][w] = max(op1, op2);
    }

    else
        return dp[n][w] = knapsack(w, n - 1);
}

int main()
{
    int Query;
    cin >> Query;

    while (Query--)
    {
        int n, w;
        cin >> n >> w;

        for (int i = 0; i < n; i++)
            cin >> weight[i];

        for (int i = 0; i < n; i++)
            cin >> value[i];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= w; j++)
                dp[i][j] = -1;
        }
        int result = knapsack(w, n);
        cout << result << endl;
    }

    return 0;
}