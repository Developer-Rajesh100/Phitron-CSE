#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < B.size(); i++)
    {
        cin >> B[i];
    }

    vector<int> C(B);
    C.insert(C.end(), A.begin(), A.end());

    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}