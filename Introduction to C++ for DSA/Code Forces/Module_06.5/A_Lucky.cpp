#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string str;
        getline(cin, str);

        string first_three = str.substr(0, 3);
        string second_three = str.substr(3, 3);

        // cout << first_three << endl << second_three << endl;

        int first_sum = 0;
        int second_sum = 0;

        for (int i = 0; i < 3; i++)
        {
            first_sum += first_three[i] - '0';
        }

        // cout << first_sum << endl;

        for (int i = 0; i < 3; i++)
        {
            second_sum += second_three[i] - '0';
        }
        // cout << second_sum;

        first_sum == second_sum ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore(); // Consume the newline character

    while (T--)
    {
        string str;
        getline(cin, str);

        if (str.length() < 6)
        {
            cout << "NO"; // Handle cases where the input is less than 6 characters
        }
        else
        {
            string first_three = str.substr(0, 3);
            string second_three = str.substr(3, 3);

            int first_sum = 0;
            int second_sum = 0;

            for (int i = 0; i < 3; i++)
            {
                first_sum += first_three[i] - '0';
            }

            for (int i = 0; i < 3; i++)
            {
                second_sum += second_three[i] - '0';
            }

            first_sum == second_sum ? cout << "YES" : cout << "NO";
        }

        cout << endl; // Add a newline for each test case
    }

    return 0;
}

*/