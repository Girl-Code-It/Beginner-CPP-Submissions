#include<iostream>
#include<stdio.h>
using namespace std;
int sod(int);
int main()
{
    int n,num,s;
    cout<<"Enter the no. : "<<endl;
    cin>>n;
    num=n;
    s=sod(num);
    cout<<s;
    return 0;
}
int sod(int n)
{
    if(n!=0)
    {
        return(n%10+sod(n/10));
    }
    else
        return 0;
}
