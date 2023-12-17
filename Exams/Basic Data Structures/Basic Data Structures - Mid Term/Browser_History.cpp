/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;

    // Adding Elements to the List
    string str;
    while (true)
    {
        cin >> str;
        if (str == "end")
            break;
        myList.push_back(str);
    }

    // Input Queries
    int Q;
    cin >> Q;

    while (Q--)
    {
        string address;
        cin >> address;

        int address_len = address.size();

        if (4 < address.size())
        {
            address = address.back();
        }

        list<string>::iterator find_item;
        find_item = find(myList.begin(), myList.end(), address);

        if (find_item != myList.end())
        {
            cout << "Not Available";
        }
        else if (address != "prev" && address != "next")
        {
        }
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;

    // Adding Elements to the List
    string str;
    while (true)
    {
        cin >> str;
        if (str == "end")
            break;
        myList.push_back(str);
    }

    // Input Queries
    int Q;
    cin >> Q;

    list<string>::iterator current = myList.begin();

    while (Q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string address;
            cin >> address;

            auto find_item = find(myList.begin(), myList.end(), address);

            if (find_item != myList.end())
            {
                current = find_item;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (next(current) != myList.end())
            {
                current++;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (current != myList.begin())
            {
                current--;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
