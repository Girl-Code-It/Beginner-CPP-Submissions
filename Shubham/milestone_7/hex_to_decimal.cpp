#include<iostream>
#include<cstdio>
#include<string.h>


using namespace std;


int main()
{
    //program to convert hexadecimal to decimal
    char hex[10];
    int decimal=0, temp, place=1;
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
    cout << "Decimal Conversion of the Number is : "decimal;
}

