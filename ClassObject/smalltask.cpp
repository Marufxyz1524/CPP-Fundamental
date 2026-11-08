#include <bits/stdc++.h>
using namespace std;
class Student
{

    public:
    string name;
    int roll;
    int math;
    int english;
    double gpa;
    float marks;


    Student(string name, int roll,int math,int english)
    {
        this->name = name;
        this->roll = roll;
        this->math =  math;
        this->english = english;
        this->marks = marks;
        this->gpa  = gpa;

    }

    void hello()
    {
        cout << "Hello, Mr." << name << endl ;
        cout << "Roll : "<< roll << endl;
    }

    void total()
    {
        cout << "Total of marks:" << math + english << endl; 

    }
};
int main()
{
     Student sakib("Sakib Ahmed",23,87,98);
     sakib.hello();
     sakib.total();
    return 0;
}