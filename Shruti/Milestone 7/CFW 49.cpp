#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char hex[17];
    long long octal, bin, place;
    int i = 0, rem, val;

    cout<<"\n Enter any hexadecimal number: ";
    cin>>hex;

    octal = 0ll;
    bin = 0ll;
    place = 0ll;

    for(i=0; hex[i]!='\0'; i++)
    {
        bin = bin * place;

        {
        if (hex[i] == '0')
            bin += 0000;
        else if(hex[i] == '1')
            bin += 0001;
        else if(hex[i] == '2')
            bin += 0010;
        else if(hex[i] == '3')
            bin += 0011;
        else if(hex[i] == '4')
            bin += 0100;
        else if(hex[i] == '5')
            bin += 0101;
        else if(hex[i] == '6')
            bin += 0110;
        else if(hex[i] == '7')
            bin += 0111;
        else if(hex[i] == '8')
            bin += 1000;
        else if(hex[i] == '9')
            bin += 1001;
        else if(hex[i] == 'A' || hex[i] == 'a')
            bin += 1010;
        else if(hex[i] == 'B' || hex[i] == 'b')
            bin += 1011;
        else if(hex[i] == 'C' || hex[i] == 'c')
            bin += 1100;
        else if(hex[i] == 'D' || hex[i] == 'd')
            bin += 1101;
        else if(hex[i] == 'E' || hex[i] == 'e')
            bin += 1110;
        else if(hex[i] == 'F' || hex[i] == 'f')
            bin += 1111;
        else
            cout<<"\n Invalid hexadecimal input.";
        }

        place = 10000;
    }

    place = 1;

    while(bin > 0)
    {
        rem = bin % 1000;

        {
        if (rem == 0)
            val = 0;
        else if (rem == 1)
            val = 1;
        else if (rem == 10)
            val = 2;
        else if (rem == 11)
            val = 3;
        else if (rem == 100)
            val = 4;
        else if (rem == 101)
            val = 5;
        else if (rem == 110)
            val = 6;
        else if (rem == 111)
            val = 7;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }

    cout<<"\n Octal number = "<<octal;

    return 0;
}
