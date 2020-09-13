//Write a C program to convert Octal to Hexadecimal number system.

using namespace std;
#include<iostream>
#include<math.h>
int main()
{
    int octal,i,binary=0,place=1;
    int digit[]={0,1,10,11,100,101,110,111};
    cout<<"\n Enter an octal number :";
    cin>>octal;
    //converting octal to binary
    while(octal!=0)
    {
        i=octal%10;
        binary+=(digit[i]*place);
        place*=1000;
        octal/=10;
    }

    //converting binary to hexadecimal
    int sum,hexa[20];

    for(i=0;binary>0;i++)
    {
        sum=0;
        for(int y=0;y<4;y++)
        {
          sum+=(pow(2,y))*(binary%10);
          binary/=10;

        }
        hexa[i]=sum;
    }
    cout<<"\n Hexadecimal of the given octal number is:";
    while(i>0)
    {
        i--;
        if(hexa[i]>9)
        {
            cout<<char(hexa[i]+55);
        }
        else
        {
            cout<<hexa[i];
        }
    }


    return 0;
}
