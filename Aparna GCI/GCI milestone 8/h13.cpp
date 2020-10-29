#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        cout<<endl;
        for(j=0;j<8;j++)
        {
            if(j>=3-i&&j<=7-i)
                cout<<"*";
            else
                cout<<" ";
        }
    }
    return 0;
}
