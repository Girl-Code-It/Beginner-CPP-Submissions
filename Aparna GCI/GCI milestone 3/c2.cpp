#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],x,n,i,r,num,t,j,k;
    cout<<"Enter the no."<<endl;
    cin>>n;
    i=0;
    t=0;
    x=0;
    num=0;
    while(n!=0)
    {
        r=n%10;
        num=num*10+r;
        n=n/10;
    }
    cout<<num<<"\n";
    while(num!=0)
    {
        a[i]=num%10;
        num=num/10;
        i++;
        cout<<i<<endl;
    }
    for(j=0;j<i;j++)
    {
        t=a[0];
        a[0]=a[i-1];
        a[i-1]=t;
    }
    for(int l=0;l<i;l++)
    {
        cout<<a[l];
    }
    return 0;

}
