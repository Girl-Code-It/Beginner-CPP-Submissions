#include<iostream>
#include<stdio.h>
using namespace std;
void u(int [10][10],int,int);
int main()
{
    int i,j,a[10][10],n,m;
    cout<<"Enter the size : "<<endl;
    cin>>n>>m;
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    u(a,n,m);
    return 0;
}
void u(int ar[10][10],int n,int m)
{
    int i,j,b[10],c[10];
    cout<<"Middle row : ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<ar[n/2][j]<<" ";
            break;
    }
    cout<<endl<<"Middle column : ";
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        cout<<ar[i][m/2]<<" ";
        break;
    }
}
