#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,x,r,y,z;
    cout<<"Enter the no."<<endl;
    cin>>n;
        x=n%10;


    while(n!=0)
    {
        r=n%10;
        n=n/10;

    }
    y=r;
    z=x+y;
    cout<<"first digit : "<<y<<endl;
    cout<<"last digit : "<<x<<endl;
    cout<<"sum is: "<<z;
    return 0;
}
