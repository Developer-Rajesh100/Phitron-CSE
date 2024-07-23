#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Query;
    cin >> Query;

    while (Query--)
    {
        int n;
        cin >> n;

        vector<bool> dp(n + 1, false);
        dp[1] = true;
        for (int i = 1; i <= n; i++)
        {
            if (dp[i])
            {
                if (i + 3 <= n)
                    dp[i + 3] = true;

                if (i * 2 <= n)
                    dp[i * 2] = true;
            }
        }
        if (dp[n] == true)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}