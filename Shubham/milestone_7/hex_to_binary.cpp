#include<iostream>
#include<cstdio>
#include<string.h>


using namespace std;

int dec_to_bin(int);

int main()
{
    //program to convert hexadecimal to binary
    char hex[10];
    int decimal=0, binary, temp, place=1;
    cout << "Enter any Hexadecimal Number: ";
    cin >> hex;

    int length = strlen(hex);

    for(int i=length-1; i>=0; i--)
    {
        if(hex[i] < 10)
            temp = (int)hex[i] - 48;
        elseA

        decimal = decimal + temp*place;
        place *= 16;
    }

    binary = dec_to_bin(decimal);
    cout << "Octal conversion for the Number is : " << binary <<endl;
}


int dec_to_bin(int dec)
{
    int rem, bin=0, place=1;

    while(dec != 0)
    {
        rem = dec%2;
        bin += rem*place;
        place *= 10;
        dec /= 2;
    }
    return bin;
}

