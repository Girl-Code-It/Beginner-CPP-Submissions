#include<iostream>
#include<cstdio>
#include<string.h>
#define SIZE 100

using namespace std;

int bin_to_dec(int);

int main()
{
    //program to convert binary to decimal

    int bin, decimal;

    cout << "Enter a binary number: ";
    cin >> bin;

    decimal = bin_to_dec(bin);
    cout << decimal;
}


int bin_to_dec(int bin)
{
    int lastDigit, rem, dec=0, place=1;
    while(bin != 0)
    {
        lastDigit = bin%10;
        dec += (lastDigit * place);
        place *= 2;
        bin /= 10;

    }
    return dec;
}

