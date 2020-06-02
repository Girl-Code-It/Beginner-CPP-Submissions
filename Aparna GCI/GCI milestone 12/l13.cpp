#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],n,m,i,j,k,b[10][10],f,c,d[10],l,o;
    c=0;
    cout<<"Enter the size : "<<endl;
    cin>>n>>m;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
            f++;
        }
            for(k=0;k<n;k++)
            {
                d[k]=f;
            }
    }
    l=d[0];
    for(i=0;i<n;i++)
        {
            if(l<d[i])
                {
                    l=d[i];
                    o=i;
                }
        }
        cout<<o+1;
    return 0;
}
