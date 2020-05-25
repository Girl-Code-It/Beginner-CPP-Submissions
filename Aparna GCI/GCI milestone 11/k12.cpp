#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],n,i,j,b[10],c[10],d,f;
    f=0;
    cout<<"Enter the size : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0,j=0;i<n,j<n;i++,j++)
        {
            if(j==n-1)
                b[n-1]=a[0];
            else
           {
               b[j]=a[i+1];
           }
        }
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
    return 0;
}
