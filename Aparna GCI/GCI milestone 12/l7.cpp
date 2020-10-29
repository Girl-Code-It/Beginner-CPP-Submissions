#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int m,n,i,j,a[10][10],b[10][10],c[10][10],l,k;
    cout<<"Enter the size of array 1 : "<<endl;
    cin>>n>>l;
    cout<<"Enter the size of array 2 : "<<endl;
    cin>>l>>m;
    cout<<"Enter the elements for array 1 : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
            cin>>a[i][j];
    }
    cout<<endl<<"Enter the elements of array 2 : "<<endl;
    for(i=0;i<l;i++)
    {
        for(j=0;j<m;j++)
            cin>>b[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            {
                c[i][j]=0;
                for(k=0;k<l;k++)
                    c[i][j]+=a[i][k]*b[k][j];
            }
    }
    for(i=0;i<n;i++)
    {
        cout<<endl;
        for(j=0;j<m;j++)
            cout<<c[i][j]<<"   ";
    }
    return 0;
}
