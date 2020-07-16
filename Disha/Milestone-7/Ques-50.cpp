//Write a C program to convert Hexadecimal to Decimal number system.


using namespace std;
#include<iostream>
#include<math.h>
#include<string.h>
int main()
{
    int decimal=0,num,i;
    string hexa;
    cout<<"\n Enter an hexadecimal number :";
    getline(cin,hexa);
    int len=hexa.length()-1;
    for(i=0;i<hexa.length();i++)
    {
        if(hexa[len]>=48 && hexa[len]<=57)
        {
            num=hexa[len]-48;
        }
        else if( hexa[len]>=65 && hexa[len]<=70)
        {
            num=hexa[len]-55;
        }
        decimal+=(pow(16,i)*num);
        len--;
    }
    cout<<" \nDecimal value ="<<decimal;
    return 0;
}
