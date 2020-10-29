#include<iostream>

using namespace std;


int pow(int base, int exp)
{
        if(exp == 1)
                return base;
                
        return base*pow(base, exp-1);
}

int main()
{
        int base, exp;
        cin >> base >> exp;  
        cout << pow(base, exp) << endl;
}
