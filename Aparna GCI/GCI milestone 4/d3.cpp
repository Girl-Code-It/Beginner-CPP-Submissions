#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,s;
    s=1;
    cout<<"Enter the no. "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        s=s*i;
    }
    cout<<"Factorial is : "<<s;
    return 0;
}
