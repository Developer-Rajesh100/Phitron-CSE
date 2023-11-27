// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;
//     getline(cin, str);

//     stringstream ss(str);
//     string word;
//     string sentense;

//     while (ss >> word)
//     {
//         // reverse(word.begin(), word.end());

//         // int word_size = size(word);
//         // word.resize(word_size - 1);
//         sentense = word + " ";
//     }
//     cout << sentense;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;

    bool firstWord = true;
    while (ss >> word)
    {
        if (!firstWord)
        {
            cout << " ";
        }
        reverse(word.begin(), word.end());
        cout << word;

        firstWord = false;
    }

    return 0;
}
