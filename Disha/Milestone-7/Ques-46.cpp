//Write a C program to convert Decimal to Octal number system.
using namespace std;
#include<iostream>
int main()
{
    int decimal,place=1,octal=0;
    cout<<" \n Enter the decimal number :";
    cin>>decimal;

    while(decimal!=0)
    {
        octal+=(place*(decimal%8));
        decimal/=8;
        place*=10;
    }
    cout<<"\n Octal form of the given binary number is :"<<octal;
    return 0;
}
