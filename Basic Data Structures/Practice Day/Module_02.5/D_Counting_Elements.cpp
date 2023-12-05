#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    int count = 0;
    vector<int>::iterator it;

    for (int i = 0; i < a.size(); i++)
    {
        it = find(a.begin(), a.end(), a[i] + 1);

        if (it != a.end())
        {
            count++;
        }
    }

    cout << count;

    return 0;
}