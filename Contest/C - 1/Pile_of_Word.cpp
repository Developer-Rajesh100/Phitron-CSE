#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string S1, S2;
        cin >> S1 >> S2;

        for (char C : S1)
        {
            if (S2.find(C) != string::npos)
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                cout << "NO" << endl;
                break;
            }
        }
    }

    return 0;
}