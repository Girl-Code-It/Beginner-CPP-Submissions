//Program to find sum of natural numbers from 1 to n
#include<iostream>
using namespace std;
int main()
{
    int count,n,sum=0;
    cout<<"Enter number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum is"<<sum;
    return 0;
}