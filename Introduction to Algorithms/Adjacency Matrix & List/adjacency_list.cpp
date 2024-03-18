#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input number of Nodes and Edges
    int n, e;
    cin >> n >> e;

    // Create a 2D Vector
    vector<int> mat[n];

    // Take the input for edges from user
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        // Push the value in the adjacency list of node 'a'
        mat[a].push_back(b);
        // Push the value in the adjacency list of node 'b'
        mat[b].push_back(a);
    }

    // Connected nodes from a Specific  node

    for (auto res : mat[4])
    {
        cout << res << " ";
    }

    return 0;
}