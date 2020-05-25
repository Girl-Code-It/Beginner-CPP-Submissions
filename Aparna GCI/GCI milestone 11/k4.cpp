#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{int a[10],n,i,sm,b,s;
float avg;
cout<<"Enter the no. of elements : "<<endl;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
b=a[0];
sm=a[0];
s=0;
for(i=0;i<n;i++)
{
    s+=a[i];
}
avg=s/n;
for(i=0;i<n;i++)
{
    if(b<a[i])
        b=a[i];
    else
        if(sm<a[i])
        sm=a[i];
}
cout<<"Sum : "<<s<<endl<<"Average : "<<avg<<endl<<"Max : "<<b<<endl<<"Min : "<<sm;
    return 0;
}
