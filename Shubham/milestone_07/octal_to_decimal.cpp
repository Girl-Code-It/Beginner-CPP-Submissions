#include<iostream>
#include<cstdio>

using namespace std;

int oct_to_dec(int);
int dec_to_bin(int);

int main()
{
    //program to convert octal to decimal;
    int octal, decimal;

    cout << "Enter an Octal Number" << endl;
    cin >> octal;

    decimal = oct_to_dec(octal);
    cout << decimal;
}

int oct_to_dec(int oct)
{
    int lastDigit, place=1, dec = 0;

    while(oct != 0)
    {
        lastDigit = oct%10;
        dec += lastDigit*place;
        place *= 8;
        oct /= 10;
    }
    return dec;
}

