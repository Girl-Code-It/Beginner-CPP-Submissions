#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
        cout<<endl;
        for(j=0;j<7;j++)
        {
            if(j>=i&&j<=6-i)
                cout<<"*";
            else
                cout<<" ";
        }
    }
    return 0;
}
