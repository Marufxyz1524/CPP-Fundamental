#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10; //this is normal stack variable
    int *p = new int; 
    *p = 100;

    cout << *p << endl;
    return 0;
}