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
    Student a;
    a.roll = 10;
    a.gpa  = 4.9;
    char temp[10] ="MARUF";
    strcpy(a.name,temp);

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}