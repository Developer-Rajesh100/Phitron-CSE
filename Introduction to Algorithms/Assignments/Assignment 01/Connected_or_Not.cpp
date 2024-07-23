/*
#include <bits/stdc++.h>
using namespace std;

const int NODE_MAX_SIZE = 1e5 + 5;
vector<int> v[NODE_MAX_SIZE];
bool vis[NODE_MAX_SIZE];

bool bfs(int src, int dis)
{

}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));

    int que;
    cin >> que;

    while (que--)
    {
        int src, dis;
        cin >> src >> dis;
        bfs(src, dis);
    }

    return 0;
}
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, e;
//     cin >> n >> e;

//     vector<int> v[n + 1];

//     while (e--)
//     {
//         int a, b;
//         cin >> a >> b;
//         v[a].push_back(b);
//     }

//     int que;
//     cin >> que;

//     while (que--)
//     {
//         int src, dis;
//         cin >> src >> dis;

//         bool isFound = false;
//         for (auto i : v[src])
//         {
//             if (i == dis)
//             {
//                 isFound = true;
//                 break;
//             }
//         }
//         (isFound) ? cout << "YES" << endl : cout << "NO" << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    int que;
    cin >> que;

    while (que--)
    {
        int src, dis;
        cin >> src >> dis;

        bool isFound = false;
        if (src == dis)
            isFound = true;

        for (auto i : v[src])
        {
            if (i == dis)
            {
                isFound = true;
                break;
            }
        }
        if (isFound)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
