#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S;
        cin >> N >> S;

        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool isFound = false;

        for (int i = 0; i < N - 2; ++i)
        {
            for (int j = i + 1; j < N - 1; ++j)
            {
                for (int k = j + 1; k < N; ++k)
                {
                    if (A[i] + A[j] + A[k] == S)
                    {
                        isFound = true;
                        break;
                    }
                }
            }
        }

        (isFound) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
