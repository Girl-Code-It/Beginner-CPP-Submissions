#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,m,n,k,l,o;
    char a[10][10],c,b;
    c='X';
    b='0';
    cout<<"Enter the size : "<<endl;
    cin>>m>>n;
    k=0;
    l=m-1;
    o=n-1;
    for(i=0;i<m;i++)
    {
        for(j=k;j<=o;j++)
            a[k][j]=c;
        for(j=k+1;j<=l;j++)
            a[j][l]=c;
        for(j=o-1;j>=k;j--)
            a[l][j]=c;
        for(j=l-1;j>=k+1;j--)
            a[j][k]=c;
        k++;
        l--;
        o--;
        for(j=k;j<=o;j++)
            a[k][j]=b;
        for(j=k+1;j<=l;j++)
            a[j][l]=b;
        for(j=o-1;j>=k;j--)
            a[l][j]=b;
        for(j=l-1;j>=k+1;j--)
            a[j][k]=b;
            k++;
            l--;
            o--;
    }
    for(i=0;i<m;i++)
    {
        cout<<endl;
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
    }
    return 0;
}
