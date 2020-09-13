//Write a C program to check whether a number is Perfect number or not.

using namespace std;
#include<iostream>
int main()
{
    int num,sum=0;

    cout<<"\n Enter the number :";
    cin>>num;

    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        cout<<"\n "<<num<<" is a PERFECT NUMBER"<<endl;
    }
    else
    {
        cout<<"\n "<<num<<" is not a PERFECT NUMBER"<<endl;
    }
    return 0;
}
