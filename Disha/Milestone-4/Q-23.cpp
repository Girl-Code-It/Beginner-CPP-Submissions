//Write a C program to calculate factorial of a number.

using namespace std;
#include<iostream>

int main()
{
    int num,ans=1;
    cout<<"\n Enter the number :";
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        ans*=i;
    }
    cout<<"\n Factorial of "<<num<<" is :"<<ans<<endl;
    return 0;
}
