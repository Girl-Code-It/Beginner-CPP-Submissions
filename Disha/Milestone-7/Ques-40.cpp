//Write a C program to convert Binary to Decimal number system.

using namespace std;
#include<iostream>
#include<Math.h>
int main()
{
    int binary,dec=0,i=0,num;
    cout<<"\n Enter a binary number :";
    cin>>binary;

    while(binary!=0)
    {
        num=binary%10;
        dec=dec+(pow(2,i)*(num));
        i++;
        binary/=10;
    }
    cout<<"\n Decimal number is :"<<dec<<endl;
    return 0;
}
