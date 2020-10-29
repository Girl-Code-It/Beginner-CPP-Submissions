#include<iostream>
#include<cstdio>

using namespace std;

int bin_to_dec(int);

int main()
{
    //binary to hexadecimal

    long binary, decimal;

    cout << "Enter a binary number ";
    cin >> binary;

    decimal = bin_to_dec(binary);

    //decimal to hexadecimal
    int i=0, j;
    char hex[10];
    int rem;

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
    for(j=i-1; j>=0; j--)
        cout << hex[j];
}

int bin_to_dec(int bin)
{
    int dec=0, lastDigit, place=1;

    while(bin != 0)
    {
        lastDigit = bin%10;
        dec += (lastDigit * place);
        place *= 2;
        bin /= 10;
    }
    return dec;
}

