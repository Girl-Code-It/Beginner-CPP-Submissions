//Write a C program to calculate sum of digits of a number.

#include<iostream>
using namespace std;

int main()
{
    int num,total=0;
    cout<<"\n Enter the number :";
    cin>>num;

    while(num!=0)
    {
        total=total+(num%10);
        num=num/10;
    }
    cout<<"\n Sum of the digits of a number ="<<total<<endl;

    return 0;
}
