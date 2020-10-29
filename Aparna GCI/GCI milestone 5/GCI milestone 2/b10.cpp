#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c,d,e;
    x=2;
    y=5;
    z=0;
    a=(x==2);
    b=(x!=5);
    c=(x!=5&&y>=5);
    d=(z!=0||x==2);
    e=!(y<10);
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
    return 0;

}
