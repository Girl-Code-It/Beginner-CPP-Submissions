#include<iostream>
#include<iomanip>
using namespace std;

//Iomanip : Printing Format
int main()
{
    int t;
    cin >> t;
    double A,B,C;
    for(int i=0; i<t; i++)
    {
        cin >> A >> B >> C;
        //Printing Format
        cout << hex << left << showbase << nouppercase;
        cout << (long long) A << endl;
        
        //Change Printing Format
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        cout << B << endl;
        
        //Change Printing Format
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << endl;
    }

    return 0;
}