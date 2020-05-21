#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r,num;
    num=0;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        num=num*10+r;
        n=n/10;
    }
    cout<<num;
    return 0;
}
