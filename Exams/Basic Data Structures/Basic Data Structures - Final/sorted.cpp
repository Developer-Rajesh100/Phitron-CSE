#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        sort(v.begin(), v.end());

        auto it = unique(v.begin(), v.end());

        v.erase(it, v.end());

        for (int it : v)
            cout << it << " ";
        cout << endl;
    }

    return 0;
}