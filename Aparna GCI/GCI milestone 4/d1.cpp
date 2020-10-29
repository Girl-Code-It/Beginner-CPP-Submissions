#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int b,e,s;
    s=1;
    cout<<"Enter the base and exponent "<<endl;
    cin>>b>>e;
    for(int i=1;i<=e;i++)
    {
        s=b*s;
    }
    cout<<"Answer: "<<s;
    return 0;
}
