#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int lip(int dp[][10],int a[][10],int n,int i,int j)
{
    if(dp[i][j]<0)
    {
        int res=0;
        if(i==n-1&&j==n-1)
            return dp[i][j]=1;
        if(i==n-1||j==n-1)
            res=1;
        if(a[i][j]<a[i+1][j])
            res=1+lip(dp,a,n,i+1,j);
        if(a[i][j]<a[i][j+1])
            res=max(res,1+lip(dp,a,n,i,j+1));
        dp[i][j]=res;
    }
    return dp[i][j];
}
int b(int a[][10],int n)
{
    int dp[10][10];
    memset(dp,-1,sizeof dp);
    return lip(dp,a,n,0,0);
}
int main()
{
    int a[10][10],i,j,n;
    cout<<"Enter the size : "<<endl;
    cin>>n;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    cout<<b(a,n)<<endl;
    return 0;
}
