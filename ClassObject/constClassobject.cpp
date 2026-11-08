#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int r , int c , double g)
    {     
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    Student Rahim(23,4,4.20);
    // Rahim.roll = 45;
    // Rahim.cls = 5;
    // Rahim.gpa = 3.30;

    cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << " " <<endl;

    return 0;
}