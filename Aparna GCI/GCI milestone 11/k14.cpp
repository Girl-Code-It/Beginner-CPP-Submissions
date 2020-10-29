#include<iostream>
#include<stdio.h>
using namespace std;
int max(int a[],int,int);
int min(int a[],int,int);
int main()
{
    int a[10],i,n,min,max;
    cout<<"Enter the no. of elements : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    max=(a,0,n);
    min=(a,0,n);
    cout<<"Min : "<<min<<endl<<"Max : "<<max;
    return 0;
}
int max(int a[],int i,int n)
{
    if(i>=n)
        return a[0];
    else
    if(a[i]>a[i+1])
        return(a[i],i++,n);
}
int min(int a[],int i,int n)
{
    if(i>=n)
        return a[0];
    else
        if(a[i]<a[0])
        return (a[i],i++,n);
}
