#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    reverse(A.begin(), A.end());

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}