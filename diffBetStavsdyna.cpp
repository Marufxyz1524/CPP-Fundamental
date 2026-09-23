#include <bits/stdc++.h>
using namespace std;

// int* p;
// void fun()
// {
//    int x = 10;
//    p = &x;
//    cout << "Fun function of address -> " << *p  << endl;
//    return;
// }

// int main()
// {
//     fun();
//     cout << "Main function of address -> " << *p  << endl;
  
//     return 0;
// }

int* p;
void dynamic()
{
    int* x = new int;
    *x = 10;
    p =x;
    cout << "Value of X -> " << *p << endl;

}

int main()
{
    dynamic();
    cout << "Value of X in Main function-> " << *p << endl;

}