//Write a C program to find first and last digit of a number.

using namespace std;
#include<iostream>
int main()
{
    int num,last;
    cout<<"\n Enter the number :";
    cin>>num;
    if(num<10)
    {
       cout<<"\n The given number is a single digit number="<<num<<endl;
    }
    else
    {
        last=num%10;
        while(num>=10)
        {
            num=num/10;
        }
        cout<<"\n First digit is :"<<num;
        cout<<"\n Last digit is :"<<last<<endl;

    }


    return 0;
}
