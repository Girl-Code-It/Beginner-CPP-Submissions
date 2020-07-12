//Write a C program to find sum of first and last digit of a number.
using namespace std;
#include<iostream>
int main()
{
    int num,last;
    cout<<"\n Enter the number :";
    cin>>num;
    if(num<10)
    {
       cout<<"\n The given number is a single digit number="<<num;
       cout<<"\n Sum of digits is  :"<<num<<endl;
    }
    else
    {
        last=num%10;
        while(num>=10)
        {
            num=num/10;
        }
        cout<<"\n First digit :"<<num;
        cout<<"\n Last digit :"<<last<<endl;
        cout<<"\n Sum of first and last digit is :"<<num+last<<endl;
    }
    return 0;
}

