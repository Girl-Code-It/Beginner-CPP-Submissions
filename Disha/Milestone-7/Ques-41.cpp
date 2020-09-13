//Write a program to convert Binary to Hexadecimal number system.
using namespace std;
#include<iostream>
#include<math.h>

int main()
{
    int binary,i,num,sum,j;
    cout<<"\n Enter a binary number :";
    cin>>binary;
    int len=round(log10(binary)+1);
    while(len%4!=0)
    {
        len++;
    }
    len/=4;
    char hexa[len];

    hexa[len]='\0';

    while(binary)
    {
        len--;
        i=sum=0;
        num=binary%10000;
        while(num!=0)
        {
           sum+=(pow(2,i)*(num%10));
           num/=10;
           i++;
        }
        if(sum>=0&&sum<=9)
        {
            hexa[len]=(char)(sum +48);
        }
        else if(sum>9 && sum<=15)
        {
            hexa[len]=(char)(sum+55);
        }

        binary/=10000;

    }
    cout<<"\n Hexadecimal number ="<<hexa;
    return 0;
}
