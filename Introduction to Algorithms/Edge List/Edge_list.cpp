#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<pair<int, int>> edge;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        edge.push_back({a, b});
    }

    /*
   for (int i = 0; i < edge.size(); i++)
   {
       cout << edge[i].first << " " << edge[i].second << endl;
   }
  */

    for (auto res : edge)
        cout << res.first << " " << res.second << endl;

    return 0;
}