#include<iostream>
#include<cstdio>

using namespace std;

int dec_to_oct(int);

int main()
{
    //program to convert decimal to octal

    int decimal, octal;

    cout << "Enter any decimal number : ";
    cin >> decimal;

    octal = dec_to_oct(decimal);
    cout << octal;
}

int dec_to_oct(int dec)
{
    int rem, place=1, oct=0;

    while(dec != 0)
    {
        rem = dec%8;
        oct += rem*place;
        place *= 10;
        dec /= 8;
    }
    return oct;
}

