#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int q,p,c;
    cout<<"Enter the quantity"<<endl;
    cin>>q;
    p=q*100;
    if(p>1000)
    {
        c=0.9*p;
        cout<<"Net price after discount"<<c;
    }
    else
        cout<<"No discount. Price:"<<p;
    return 0;
}
