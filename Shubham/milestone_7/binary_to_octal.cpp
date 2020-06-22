#include<iostream>
#include<cstdio>
#include<string.h>
#define SIZE 100

using namespace std;

int bin_to_deci(int);
int dec_to_octal(int);

int main()
{
    //program to convert binary to octal number system

    long num;
    int decimal, octal;

    cout << "Enter binary number" << endl;
    cin >> num;

    decimal = bin_to_deci(num);
    octal = dec_to_octal(decimal);

    cout << "Octal -> " << octal << endl;
}

int bin_to_deci(int bin)
{
    int place=1, rem, deci=0, lastDigit, temp;

    while(bin != 0)
    {
        lastDigit = bin%10;
        deci += lastDigit * place;
        place *= 2;
        bin /= 10;
    }
    return deci;
}


int dec_to_octal(int dec)
{
    int rem, octal=0, place=1;

    while(dec != 0)
    {
        rem = dec%8;
        octal += rem*place;
        place *= 10;
        dec /= 8;
    }
    return octal;
}

