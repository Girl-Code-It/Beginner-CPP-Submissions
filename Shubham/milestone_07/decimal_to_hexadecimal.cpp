#include<iostream>
#include<cstdio>

using namespace std;


int main()
{
    //program to convert decimal to hexadecimal
    int decimal, rem, i=0, j;
    char hex[10];

    cout << "Enter any decimal number : ";
    cin >> decimal;

    while(decimal != 0)
    {
        rem = decimal%16;

        if(rem < 10)
            hex[i] = rem + 48;
        else
            hex[i] = rem + 55;

        i++;
        decimal /= 16;
    }
    hex[i] = '\0';
    for(j=i-1; j>=0; j--)
        cout << hex[j];
}

