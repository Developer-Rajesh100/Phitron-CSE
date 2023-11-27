#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int totaMarks;
};
Student compare(Student a, Student b, Student c)
{

    if (a.totaMarks > b.totaMarks && a.totaMarks > c.totaMarks)
    {
        return a;
    }
    else if (b.totaMarks > a.totaMarks && b.totaMarks > c.totaMarks)
    {
        return b;
    }
    else if (c.totaMarks > b.totaMarks && c.totaMarks > a.totaMarks)
    {
        return c;
    }

    return (a.totaMarks == b.totaMarks) ? a : (b.totaMarks == c.totaMarks) ? b
                                          : (c.totaMarks == a.totaMarks)   ? a
                                                                           : c;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        Student a;
        Student b;
        Student c;
        cin >> a.id >> a.name >> a.section >> a.totaMarks;
        cin >> b.id >> b.name >> b.section >> b.totaMarks;
        cin >> c.id >> c.name >> c.section >> c.totaMarks;

        Student height = compare(a, b, c);
        cout << height.id << " " << height.name << " " << height.section << " " << height.totaMarks << endl;
    }

    return 0;
}