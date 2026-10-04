#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    float gpa;
};

int main()
{
    Student a,b;
    // cin >> a.name >> a.gpa >> a.roll;
    // cin >> b.name >> b.gpa >> b.roll;
    cin.getline(a.name,20);
    cin >> a.gpa >> a.roll;

    cin.ignore();
    cin.getline(b.name,20);
    cin >> b.gpa >> b.roll;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}