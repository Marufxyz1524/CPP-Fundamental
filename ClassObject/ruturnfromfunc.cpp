#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll , int cls , double gpa)
    {     
       this->roll = roll;
       this->cls = cls;
       this->gpa = gpa;
    }
};

Student fun()
{
    Student alex(23,5,8.9);
    return alex;
}
int main()
{
    // Student Rahim(23,4,4.20);
    // Student Karim(34,5,3.89);
    // // Rahim.roll = 45;
    // // Rahim.cls = 5;
    // // Rahim.gpa = 3.30;

    // cout << Rahim.roll << " " << Rahim.cls << " " << Rahim.gpa << " " <<endl;
Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << " " <<endl;

    return 0;
}