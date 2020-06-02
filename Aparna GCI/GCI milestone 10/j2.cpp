#include<iostream>
#include<stdio.h>
using namespace std;
int maxi(int,int,int);
int mini(int,int,int);
int main()
{
    int a,b,c,ma,mi;
    cout<<"Enter the numbers : "<<endl;
    cin>>a>>b>>c;
    ma=maxi(a,b,c);
    mi=mini(a,b,c);
    cout<<"Maximum no. "<<ma<<endl;
    cout<<"Minimum no. "<<mi;
    return 0;
}
int maxi(int x,int y,int z)
{
    if(x>y&&x>z)
        return x;
    else
        if(y>x&&y>z)
        return y;
    else
        return z;
}
int mini(int x,int y,int z)
{
    if(x<y&&x<z)
        return x;
    else
        if(y<x&&y<z)
        return y;
    else
        return z;
}
