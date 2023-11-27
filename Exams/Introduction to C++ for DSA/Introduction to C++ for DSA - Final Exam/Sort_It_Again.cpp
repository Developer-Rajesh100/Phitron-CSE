#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

// bool cmp(Student a, Student b)
// {

//     if (a.eng_marks > b.eng_marks)
//     {
//         return true;
//     }
//     else if (a.eng_marks < b.eng_marks)
//     {
//         return false;
//     }
//     else
//     {
//         if (a.math_marks > b.math_marks)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// }

bool cmp(Student a, Student b)
{
    if (a.eng_marks != b.eng_marks)
    {
        return a.eng_marks > b.eng_marks;
    }
    else if (a.math_marks != b.math_marks)
    {
        return a.math_marks > b.math_marks;
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}
