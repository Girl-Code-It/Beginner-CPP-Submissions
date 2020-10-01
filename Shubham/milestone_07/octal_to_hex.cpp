#include<iostream>
#include<cstdio>

using namespace std;

int oct_to_dec(int);
int dec_to_bin(int);

int main()
{
    //program to convert octal to hexadecimal;
    int octal, decimal;

    cout << "Enter an Octal Number" << endl;
    cin >> octal;

    decimal = oct_to_dec(octal);

    //decimal to hex

    char hex[10];
    int i=0, j, rem;

    while(decimal != 0)
    {
        rem = decimal%16;

        if(rem < 10)
            hex[i] = rem + 48;
        else
            hex[i] = rem + 55;
        decimal /= 16;
        i++;
    }
    hex[i] = '\0';
    cout << "Hexadecimal Number  : ";
    for(j= i-1; j>=0; j--)
        cout << hex[j];

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

