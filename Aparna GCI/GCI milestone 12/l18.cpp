#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],i,j,m,n,k,l,o,p,b[10][10];
    cout<<"Enter the size : "<<endl;
    cin>>m>>n;
    cout<<"Enter the elements : "<<endl;
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
               {
                   k=i;
                   l=j;
                   for(o=0;o<n;o++)
                   b[k][o]=0;
                   for(p=0;p<m;p++)
                   b[p][l]=0;
               }
           }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            if(b[i][j]!=0)
                b[i][j]=1;
    }
    for(i=0;i<m;i++)
    {
        cout<<endl;
        for(j=0;j<n;j++)
            cout<<b[i][j]<<" ";
    }
    return 0;
}
