//Write a C program to convert Hexadecimal to Octal number system.

using namespace std;
#include<iostream>
#include<math.h>
#include<string.h>
int main()
{
    int digit[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111},place=1,num;
    string hexa;
    long long binary=0;
    cout<<"\n Enter an hexadecimal number :";
    getline(cin,hexa);
    //converting hexadecimal to binary
    int len=hexa.length()-1;
    while(len>=0)
    {
        if(hexa[len]>=48&& hexa[len]<=57)
        {
            num=hexa[len]-48;
        }
        else if(hexa[len]>=65 && hexa[len]<=70)
        {
            num=hexa[len]-55;
        }
        binary+=(digit[num]*place);
        len--;
        place*=10000;
    }

    //converting binary to octal
    int oct=0,sum,i;
    place=1;
    while(binary!=0)
    {
        sum=i=0;
        num=binary%1000;
        while(num!=0)
        {
            sum+=(pow(2,i)*(num%10));
            num/=10;
            i++;
        }
        oct+=(sum*place);
        place*=10;
        binary/=1000;
    }

    cout<<"\n Octal value ="<<oct;
    return 0;
}
