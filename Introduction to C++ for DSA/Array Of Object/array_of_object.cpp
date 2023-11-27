#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    int roll;
    string deperment;
    float cgpa;
    // Constructor
    /*
     Student(int id, string name, int roll, string deperment, float cgpa)
     {
         this->id = id;
         this->name = name;
         this->roll = roll;
         this->deperment = deperment;
         this->cgpa = cgpa;
     }
    */
};

int main()
{
    // Input Using Constructor
    /*
     Student rajesh(7, "Rajesh", 5, "BCA", 7.7);
     cout << rajesh.id << " " << rajesh.name << " " << rajesh.roll << " " << rajesh.deperment << " " << rajesh.cgpa << endl;
    */

    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].id >> arr[i].name >> arr[i].roll >> arr[i].deperment >> arr[i].cgpa;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].roll << " " << arr[i].deperment << " " << arr[i].cgpa << endl;
    }

    return 0;
}