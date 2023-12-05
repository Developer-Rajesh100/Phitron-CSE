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

    bool isFound = false;
    // vector<int>::iterator it;
    unordered_set<int> it;
    for (int i = 0; i < A.size(); i++)
    {
        if (it.find(A[i]) != it.end())
        {
            isFound = true;
            break;
        }
        it.insert(A[i]);
    }

    (isFound == true) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}

/*
#include <iostream>
#include <vector>
#include <unordered_set>

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

    unordered_set<int> uniqueElements;
    bool isFound = false;

    for (int i = 0; i < A.size(); i++)
    {
        if (uniqueElements.find(A[i]) != uniqueElements.end())
        {
            isFound = true;
            break;
        }
        uniqueElements.insert(A[i]);
    }

    (isFound == true) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}

*/