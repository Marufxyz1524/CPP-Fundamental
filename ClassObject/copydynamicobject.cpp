#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string countery;
    int jersey;

    Cricketer(string countery,int jersey)
    {
        this->countery = countery;
        this->jersey  = jersey;
    }
};
int main()
{
    Cricketer* dhoni =   new Cricketer("India",100);
    Cricketer* kohli =   new Cricketer("India",100);

    // kohli->countery = dhoni->countery;
    // kohli->jersey = dhoni->jersey;
    // delete dhoni;
    
    *kohli = *dhoni;  // best 
    cout << kohli->countery << " " << kohli->jersey << endl;

    return 0;
}