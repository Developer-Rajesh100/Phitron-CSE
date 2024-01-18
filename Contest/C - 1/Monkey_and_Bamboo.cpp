#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int H, A, B;
        cin >> H >> A >> B;

        if (A <= B)
        {
            cout << "Impossible" << endl;
            return 0;
        }

        int time = 0;

        while (true)
        {
            if (H <= 0)
            {
                cout << time << endl;
                break;
            }
            else
            {
                H -= A;
                time++;

                if (H <= 0)
                {
                    cout << time << endl;
                    break;
                }
                else
                {
                    H += B;
                    time++;
                }
            }
        }

        return 0;
    }