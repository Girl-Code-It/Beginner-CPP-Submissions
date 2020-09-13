//Write a program to convert Octal to Binary number system.

using namespace std;
#include<iostream>
#include<math.h>
int main()
{
    int octal,i,place=1;
    int digit[]={0,1,10,11,100,101,110,111};

    cout<<"\n Enter the octal number :";
    cin>>octal;
    long long binary=0;

    while(octal!=0)
    {
        i=octal%10;
        binary=(digit[i] * place) +binary;
        octal/=10;
        place*=1000;
    }

    cout<<"\n Binary form of the given octal number is :"<<binary;

    return 0;
}
