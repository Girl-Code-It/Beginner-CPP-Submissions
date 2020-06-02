#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r,s;
    s=0;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    int num=n;
    while(n!=0)
    {
        r=n%10;
        s+=r*r*r;
        n=n/10;
    }
    if(num==s)
        cout<<"Armstrong no. ";
    else
        cout<<"Not Armstrong no. ";
    return 0;
}
