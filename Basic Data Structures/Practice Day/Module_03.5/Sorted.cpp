#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }

        vector<int> temp(A);

        sort(temp.begin(), temp.end());

        (A == temp) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}