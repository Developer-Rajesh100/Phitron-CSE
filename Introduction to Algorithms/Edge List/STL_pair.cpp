#include <bits/stdc++.h>
using namespace std;

int main()
{
    // First Pair
    pair<int, int> p;

    p.first = 10;  // accessing first
    p.second = 20; // accessing second

    cout << p.first << " " << p.second << endl;

    // Second way to create a pair
    pair<int, int> p2;
    p2 = make_pair(14, 15);

    cout << p2.first << " " << p2.second << endl;

    // Thied  Way To Create A Pair
    pair<string, int> mam;
    pair<string, int> raj;
    mam = make_pair("Mam", 18);
    raj = make_pair("Raj", 21);

    cout << mam.first << " " << raj.first << endl;
    cout << mam.second << " " << raj.second << endl;

    return 0;
}