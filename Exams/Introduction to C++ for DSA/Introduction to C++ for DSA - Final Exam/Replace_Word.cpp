#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S, X;
        // getline(cin, S);
        // getline(cin, X);
        cin >> S >> X;

        while (S.find(X) != -1)
        {
            S.replace(S.find(X), X.size(), "#");
        }
        cout << S << endl;
    }
    return 0;
}
