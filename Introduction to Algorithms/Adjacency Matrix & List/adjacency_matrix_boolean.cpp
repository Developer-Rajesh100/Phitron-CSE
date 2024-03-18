#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    bool mat[n][n];
    memset(mat, false, sizeof(mat));

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        mat[a][b] = true;
        mat[b][a] = true;
    }

    (mat[0][0]) ? (cout << "found!" << endl) : (cout << "Not Found!" << endl);

    return 0;
}