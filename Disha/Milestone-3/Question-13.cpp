//Write a C program to swap first and last digits of a number.

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
        int new_no;
        last=num%10;
        num=num/10;
        new_no=last;

        while(num>=10)
        {
            new_no=(new_no*10)+(num%10);
            num=num/10;
        }
        new_no=(new_no*10)+num;
        cout<<"\n New number after swapping first and last digit is ="<<new_no<<endl;

    }
    return 0;
}
