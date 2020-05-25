#include<iostream>
#include<stdio.h>
using namespace std;
int f(int a[][10],int i,int j,int b,int c);
{
    if(i<0||j<0||i>=m||j>=n)
        return;
    if(a[i][j]!=b)
        return;
    a[i][j]=c;
    f(a,i-1,j,b,c);
    f(a,i+1,j,b,c);
    f(a,i,j-1,b,c);
    f(a,i,j+1,b,c);
}
int main()
{
    int a[10][10],i,j,n,m;
    cout<<"Enter the size : "<<endl;
    cin>>m>>n;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
                a[i][j]=-1;
        }
    }
    for(i=0;i<m;i++)
        if(a[i][0]==-1)
            f(a,i,0,-1,0);
        for(i=0;i<m;i++)
            if(a[i][m-1]==-1)
            f(a,i,m-1,-1,0);
        for(i=0;i<n;i++)
            if(a[0][i]==-1)
            f(a,0,i,-1,0);
        for(i=0;i<n;i++)
            if(a[n-1][i]==-1)
                f(a,n-1,i,-1,0);
                for(i=0;i<m;i++)
                {
                    for(j=0;j<n;j++)
                        if(a[i][j]==-1)
                        a[i][j]=1;
                }
                for(i=0;i<m;i++)
                {
                    cout<<endl;
                    for(j=0;j<n;j++)
                        cout<<a[i][j];
                }
                return 0;
}
