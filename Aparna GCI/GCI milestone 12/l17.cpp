#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],i,j,m,n;
    cout<<"Enter the size : "<<endl;
    cin>>n>>m;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(j=0;j<m;j++)
    {
        if(j%2==0)
        {
            for(i=0;i<n;i++)
                cout<<a[i][j]<<" ";
        }
        else
        {
            for(i=m-1;i>=0;i--)
                cout<<a[i][j]<<" ";
        }
    }
    return 0;
}
