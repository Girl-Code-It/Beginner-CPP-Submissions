#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main()
{
    //program to find power of any number using for loop

    int base, exponent, output =1 ;

    cout << "Enter the base : " << endl;
    cin >> base;

    cout << "Enter the exponent: " << endl;
    cin >> exponent;

    for(int i=1; i<=exponent; i++)
        output = output * base;

    cout << "Base = " << base <<endl;
    cout << "Exponent = " << exponent << endl;
    cout << "Result = " << output << endl;
}

