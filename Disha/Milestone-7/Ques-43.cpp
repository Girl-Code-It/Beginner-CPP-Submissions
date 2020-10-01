//Write a C program to convert Octal to Decimal number system.

using namespace std;
#include<iostream>
#include<math.h.>

int main()
{
    int octal,digit,decimal=0,i=0,place=1;
    cout<<"\n Enter an octal number =";
    cin>>octal;
    while(octal!=0)
    {
        digit=octal%10;
        decimal=((pow(8,i)*digit))+decimal;
        i++;
        place*=10;
        octal/=10;
    }
    cout<<"\n Decimal form of the given octal number is ="<<decimal;
    return 0;
};
