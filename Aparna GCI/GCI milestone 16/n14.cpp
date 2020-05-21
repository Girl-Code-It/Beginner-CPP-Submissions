#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,k,i,a[10],b[10],c,j,d;
    c=0;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
    {
        b[i]=k;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((a[i]==j+1)&&(b[j]>=0))
            {
                b[j]=b[j]-1;
                cout<<b[j]<<" ";
            }
            else
                c++;
                cout<<c<<" ";
        }
    }
    cout<<c<<endl;
    return 0;
}
