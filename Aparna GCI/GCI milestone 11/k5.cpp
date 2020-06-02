#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],n,i,j,b[10],temp,c[10];
    temp=0;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
        b[j]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(b[i]<b[j])
        {
            temp=b[j];
            b[j]=b[i];
            b[i]=temp;
        }
    }
   for(i=0,j=0;i<n,j<=n;i++,j++)
    {
        if(a[i]==b[n-1])
        {
            c[j]=b[n-2];
            j++;
            c[j]=(b[n-1]-b[n-2]);
        }
        else
            c[j]=a[i];
    }
    for(i=0;i<=n;i++)
        cout<<c[i]<<" ";
    return 0;
}
