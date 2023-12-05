#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Vector Size Declaration & value Print
    /*
     vector<int> v(5, 7);

     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     }

     cout << v.size();
    */

    // Vector copy another Vector

    /*
    vector<int> v2(5, 8);
    vector<int> v3(v2);

    for (int i = 0; i < v2.size(); i++)
    {
        // cout << v2[i] << " ";
        cout << v3[i] << " ";
    }
    */

    // Array copy in Vector

    /*
    int arr[5] = {10, 20, 30, 40, 50};

    vector<int> v4(arr, arr + 5);

    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    */

    // Vector Value Initialization
    vector<int> v5 = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    v5[2] = 33;

    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }

    return 0;
}