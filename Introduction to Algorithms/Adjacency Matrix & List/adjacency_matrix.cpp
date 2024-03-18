#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input number of Nodes and Edges
    int n, e;
    cin >> n >> e;

    // Create a Matrix(2D Arrey)
    int mat[n][n];

    // Initialize all matrix's elements to  0
    memset(mat, 0, sizeof(mat));

    //  Take the input for edges from user
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    /*
    // Output of  Adjacency Matrix:
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout << mat[i][j] << " ";
         }
         cout << endl;
     }
    */

    // Check  Node is  connected or not using Adjacenct Matrix
    if (mat[4][1])
        cout << "Connected" << endl;
    else
        cout << "Not Connected" << endl;

    return 0;
}