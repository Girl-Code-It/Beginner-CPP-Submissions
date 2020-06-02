#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a,r;
    a=0;
    cout<<"Enter the no."<<endl;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        a++;
        n=n/10;
    }
    cout<<"no. of digits "<<a;
    return 0;
}
