//Write a C program to convert Decimal to Hexadecimal number system.
using namespace std;
#include<iostream>

int main()
{
    int decimal,num,i=0;
    char hexa[30];
    cout<<" \n Enter the decimal number :";
    cin>>decimal;

    while(decimal!=0)
    {
       num=decimal%16;
       if(num>9 && num<=15)
       {
           hexa[i]=(char)(num+55);
       }
       else
       {
           hexa[i]=(char)(num+48);
       }
       i++;
       decimal/=16;
    }
    hexa[i]='\0';
    cout<<"\n Hexadecimal value =";
    for(int j=i-1;j>=0;j--)
    {
        cout<<hexa[j];
    }

    return 0;
}
