#include<iostream>
#include<stdio.h>
using namespace std;
int sum(int a[],int,int);
int main()
{
    int n,s,i,j,a[10];
    s=0;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    s=sum(a,0,n);
    cout<<s;
    return 0;
}
int sum(int a[],int i,int n)
{
    if(i>=n)
        return 0;
    else
    return(a[i]+sum(a,i+1,n));
}
