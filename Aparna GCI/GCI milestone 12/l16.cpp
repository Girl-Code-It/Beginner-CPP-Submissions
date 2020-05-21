#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],i,j,n,m,s,f;
    f=0;
    cout<<"Enter the size : "<<endl;
    cin>>n>>m;
    cout<<"Enter array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
            if(a[i][j]==0)
        {
            if(i==0)
            {
                if(j==0)
                s=a[i][j+1]+a[i+1][j];
                else
                    if(j==m-1)
                    s=a[i][j-1]+a[i+1][j];
                else
                    s=a[i][j-1]+a[i][j+1]+a[i+1][j];
            }
            else
                if(i==m-1)
            {
                if(j==0)
                    s=a[i][j+1]+a[i-1][j];
                else
                    if(j==m-1)
                    s=a[i-1][j]+a[i][j-1];
                else
                    s=a[i][j-1]+a[i][j+1]+a[i-1][j];
            }
            else
            if(j==0)
                s=a[i][j+1]+a[i-1][j]+a[i+1][j];
            else
                if(j==m-1)
                s=a[i][j-1]+a[i-1][j]+a[i+1][j];
            else
            s=a[i+1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1];
        }
        f+=s;
    }
    cout<<f;
    return 0;
}
