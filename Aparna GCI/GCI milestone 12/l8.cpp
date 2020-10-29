 #include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,a[4][4],l,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0||j==2)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
    for(i=1;i<3;i++)
    {
        for(j=0;j<2;j++)
            if(i==2&&j==0)
        {
            cout<<a[i][j+1]<<" "<<a[i][j]<<" ";
        }
    }
    for(i=1;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
 return 0;
}
