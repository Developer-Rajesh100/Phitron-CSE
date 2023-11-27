#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    float cgpa;
    Student(int roll, int cls, float cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};

Student fun()
{
    Student raj(54, 2, 5);

    return raj;
}

int main()
{
    Student res = fun();
    cout << res.roll << " " << res.cls << " " << res.cgpa << endl;
    return 0;
}