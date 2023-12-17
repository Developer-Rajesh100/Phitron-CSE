#include <bits/stdc++.h>
using namespace std;

// Print Function
void print(list<int> &myList)
{
    cout << "L -> ";
    for (auto it = myList.begin(); it != myList.end(); it++)
        cout << *it << " ";
    cout << endl;
}

// Reverse Print Function
void revPrint(list<int> &myList)
{
    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    list<int> myList;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            myList.push_front(V);
        }
        else if (X == 1)
        {
            myList.push_back(V);
        }
        else if (X == 2)
        {
            if (V == (myList.size() - 1))
            {
                myList.pop_back();
            }
            else if (V >= 0 && V < myList.size())
            {
                myList.erase(next(myList.begin(), V));
            }
            else
            {
                print(myList);
                revPrint(myList);
                continue;
            }
        }
        print(myList);
        revPrint(myList);
    }

    return 0;
}
