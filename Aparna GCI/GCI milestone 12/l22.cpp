#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],i,j,k,n,m,l,o,p;
    cout<<"Enter  size of sub-square : "<<endl;
    cin>>k;
    o=n+1-k;
    p=0;
    cout<<"Enter size : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
            for(m=p;m<o;m++)
            {
                for(l=p;l<0;l++)
                    b[m][l]+=a[i][j];
            }
        }
    }
}
