#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Query;
    cin >> Query;

    while (Query--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int first = 0, second = -1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[first])
            {
                second = first;
                first = i;
            }
            else if (arr[i] != arr[first] && (second == -1 || arr[second] < arr[i]))
            {
                second = i;
            }
        }

        vector<int> res = {first, second};
        sort(res.begin(), res.end());

        cout << res[0] << " " << res[1] << endl;
    }

    return 0;
}