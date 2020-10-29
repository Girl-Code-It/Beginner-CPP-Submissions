#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,a[4][4],l,k,n;
    cout<<"Dimension of matrix : "<<endl;
    cin>>n
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    do
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||j==n-1)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-1;j++)
            if(i==n-1&&j==0)
        {
            cout<<a[i][j+1]<<" "<<a[i][j]<<" ";
        }
    }
    for(i=1;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    for()
    }while(n>0)
 return 0;
}
