#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    char section;
    long long int number;
    float cgpa;
    Student(
        /*int r, char s, long long int num, float c*/
        int roll,
        char section,
        long long int number,
        float cgpa)
    {
        // roll = r;
        // section = s;
        // number = num;
        // cgpa = c;

        // (*this).roll = roll;
        // (*this).section = section;
        // (*this).number = number;
        // (*this).cgpa = cgpa;

        this->roll = roll;
        this->section = section;
        this->number = number;
        this->cgpa = cgpa;
    }
};

int main()
{
    Student rajesh(54, 'A', 6294946391, 8);
    // cin >> rajesh.roll >> rajesh.section >> rajesh.number >> rajesh.cgpa;
    cout << rajesh.roll << " " << rajesh.section << " " << rajesh.number << " " << rajesh.cgpa << endl;

    return 0;
}