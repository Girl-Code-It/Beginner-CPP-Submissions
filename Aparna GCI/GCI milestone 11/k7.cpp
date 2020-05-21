#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],i,j,f,b[10][10];
    f=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            if(a[i][j]!=b[i][j])
        {
            f=1;
        }
    }
    if(f==1)
        cout<<"Not Symmetric";
    else
        cout<<"symmetric";
    return 0;
}
