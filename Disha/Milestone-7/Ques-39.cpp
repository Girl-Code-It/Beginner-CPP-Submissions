//Write a C program to convert Binary to Octal number system.

using namespace std;
#include<iostream>
#include<math.h>
int main()
{
    int binary,oct=0,n,i,j=1,digit;
    cout<<"\n Enter a binary number :";
    cin>>binary;
    cout<<"\n Octal number =";
    while(binary!=0)
    {   i=digit=0;
        n=binary%1000;
        while(n!=0)
        {
          digit+=(pow(2,i)*(n%10));
          i++;
          n/=10;
        }
        digit*=j;
        oct+=digit;
        j*=10;
        binary/=1000;
    }
    cout<<oct;

    return 0;
}
