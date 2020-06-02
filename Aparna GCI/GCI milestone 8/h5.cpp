#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        cout<<endl;
        for(j=0;j<i;j++)
            cout<<"*";
    }
    for(i=5;i<8;i++)
    {
        cout<<endl;
        for(j=8-i;j>0;j--)
                cout<<"*";
    }
    return 0;
}
