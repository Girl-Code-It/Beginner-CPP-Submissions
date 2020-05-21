#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],d[10],o,m,n,i,j,k;
    cout<<"Enter the size : "<<endl;
    cin>>n>>m;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0,k=0;i<n,k<n;i++,k++)
    {
        int f=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                f++;
            }
        }
            d[k]=f;
    }
    int l=d[0];
    for(i=0;i<n;i++)
    {
        if(d[i]>l)
        {
            o=i;
        }
        else
            o=0;
    }
    cout<<o+1;
    return 0;
}
