#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    stringstream ss(str);
    string word;

    int count = 0;
    while (ss >> word)
    {
        bool isAlphabate = false;
        for (char c : word)
        {
            if (isupper(c) || islower(c))
            {
                isAlphabate = true;
                break;
            }
        }
        if (isAlphabate)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
