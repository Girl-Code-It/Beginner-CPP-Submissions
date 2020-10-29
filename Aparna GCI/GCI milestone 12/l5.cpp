#include<iostream>
#include<stdio.h>
using namespace std;
void lds(int [10][10]);
void rds(int [10][10]);
int main()
{
    int a[10][10],i,j;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<3;i++)
    {
        cout<<endl;
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    lds(a);
    rds(a);
    return 0;
}
void lds(int ar[10][10])
{
    int i,j,l;
    l=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            if(i==j)
        {
            l+=ar[i][j];
        }
    }
    cout<<endl<<"left diagonal : "<<l<<endl;
}
void rds(int ar[10][10])
{
    int i,j,r;
    r=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            r+=ar[i][j];
        }
    }
    cout<<endl<<"right diagonal : "<<r<<endl;
}
