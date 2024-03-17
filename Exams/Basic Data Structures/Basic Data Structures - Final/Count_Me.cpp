#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        getline(cin, s, '\0');

        string word;
        stringstream ss(s);

        map<string, int> mp;

        while (ss >> word)
        {
            mp[word]++;
        }

        auto first = mp.begin();

        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            // cout << it->first << " " << it->second << endl;
            if (it->second > first->second)
            {
                first = it;
            }
        }
        cout << first->first << " " << first->second << endl;
    }

    return 0;
}