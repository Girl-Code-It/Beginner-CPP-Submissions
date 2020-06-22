#include<iostream>
#include<cstdio>
#include<string.h>


using namespace std;

int dec_to_oct(int);

int main()
{
    //program to convert hexadecimal to octal
    char hex[10];
    int decimal=0, octal, temp, place=1;
    cout << "Enter any Hexadecimal Number: ";
    cin >> hex;

    int length = strlen(hex);

    for(int i=length-1; i>=0; i--)
    {
        if(hex[i] < 10)
            temp = (int)hex[i] - 48;
        else
            temp = (int)hex[i]- 55;

        decimal = decimal + temp*place;
        place *= 16;
    }

    octal = dec_to_oct(decimal);
    cout << "Octal conversion for the Number is : " << octal <<endl;
}


int dec_to_oct(int dec)
{
    int rem, oct=0, place=1;

    while(dec != 0)
    {
        rem = dec%8;
        oct += rem*place;
        place *= 10;
        dec /= 8;
    }
    return oct;
}

