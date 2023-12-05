#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<long long int> A(N);

    for (size_t i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    vector<long long int> pre(N);

    pre[0] = A[0];
    for (int i = 1; i < A.size(); i++)
    {
        pre[i] = pre[i - 1] + A[i];
    }

    sort(pre.begin(), pre.end(), greater<>());

    for (size_t i = 0; i < A.size(); i++)
    {
        cout << pre[i] << " ";
    }

    return 0;
}