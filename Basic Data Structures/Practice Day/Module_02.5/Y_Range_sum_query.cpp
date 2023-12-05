#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;

    long long int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int pre[n];
    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    while (q--)
    {
        long long int sum = 0;
        long long int l, r;
        cin >> l >> r;
        l -= 1;
        r -= 1;
        (l == 0) ? sum = pre[r] : sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }

    return 0;
}