//Write a C program to check whether a number is Prime number or not.

using namespace std;
#include<iostream>
int main()
{
    int num,flag=0;
    cout<<"\n Enter the number (0 & 1 will be considered as wrong inputs):";
    cin>>num;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
         cout<<"\n Yes,given number is a prime number "<<endl;
    }
    else
    {
        cout<<"\n No,given number is not a prime number "<<endl;
    }
    return 0;
}

