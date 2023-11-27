#include <bits/stdc++.h>
using namespace std;

int main()
{

    string S;

    while (getline(cin, S))
    {
        int size = S.size();
        int A[size];

        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (S[i] == ' ')
                count++;
            A[i] = S[i] - '0';
        }

        sort(S.begin(), S.end());

        for (int i = count; i < size; i++)
        {
            cout << S[i];
        }
        cout << endl;
    }

    return 0;
}