#include <bits/stdc++.h>
using namespace std;

int main()
{
    // A array Declear and give input from user
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }

    // B array Declear and give input from user
    int M;
    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < B.size(); i++)
    {
        cin >> B[i];
    }

    // X input for insert Index
    int X;
    cin >> X;

    // Insert B array in A array in X index position
    A.insert(A.begin() + X, B.begin(), B.end());

    // Print the Result
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}