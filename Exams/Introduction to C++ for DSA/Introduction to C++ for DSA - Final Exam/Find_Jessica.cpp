#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    bool isJessica = false;

    stringstream ss(S);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            isJessica = true;
        }
    }

    isJessica == true ? cout << "YES" : cout << "NO";

    return 0;
}

/*
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string S;
    getline(cin, S);

    bool isJessica = false;

    stringstream ss(S);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            isJessica = true;
        }
    }

    isJessica == true ? cout << "YES" : cout << "NO";

    return 0;
}

*/