#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],i,n,b,s,st,bt;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    s=a[0];
    b=a[0];
    for(i=0;i<n;i++)
    {
         if(a[i]<s)
        {
            st=s;
            s=a[i];
        }
        if(a[i]>b)
        {
            bt=b;
            b=a[i];
        }
    }
    cout<<"Smallest : "<<s<<endl;
    cout<<"Largest : "<<b;
    return 0;
}
