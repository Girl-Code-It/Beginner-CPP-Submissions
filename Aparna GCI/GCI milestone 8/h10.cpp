#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(int k=0;k<9;k++)
        cout<<"*";
    for(i=0;i<4;i++)
    {
        cout<<endl;
        for(j=0;j<9;j++)
        {
            if(j>=4-i&&j<=4+i)
                cout<<" ";
            else
                cout<<"*";
        }

    }
    for(i=4;i<7;i++)
    {
        cout<<endl;
        for(j=0;j<9;j++)
        {
            if(j>=i-2&&j<=10-i)
                cout<<" ";
            else
                cout<<"*";
        }
    }
    cout<<endl;
    for(int k=0;k<9;k++)
        cout<<"*";
            return 0;
}
