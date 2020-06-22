#include<iostream>
#include<cstdio>

using namespace std;

int oct_to_dec(int);
int dec_to_bin(int);

int main()
{
    //program to convert octal to binary

    int octal, decimal, binary;

    cout << "Enter an Octal Number : ";
    cin >> octal;

    decimal = oct_to_dec(octal);
    binary = dec_to_bin(decimal);

    cout << binary << endl;
}

int oct_to_dec(int oct)
{
    int lastDigit, dec=0, place = 1;

    while(oct != 0)
    {
        lastDigit = oct%10;
        dec += lastDigit*place;
        place *= 8;
        oct /= 10;
    }
    return dec;
}

int dec_to_bin(int dec)
{
    int lastDigit, bin=0, rem, place = 1;

    while(dec != 0)
    {
        rem = dec%2;
        bin += rem*place;
        place *= 10;
        dec /= 2;
    }
    return bin;
}

