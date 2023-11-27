#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;

    cin >> X;

    int A = X;

    if (A >= 48 && A <= 57)
    {
        cout << "IS DIGIT";
    }
    else if (A >= 65 && A <= 90)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }
    else if (A >= 97 && A <= 122)
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }

    return 0;
}