#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        cout<<endl;
        for(j=0;j<7;j++)
        {
               if(j>=3-i&&j<=3+i)
                cout<<"*";
                else
                cout<<" ";

        }
    }
    for(i=4;i<7;i++)
    {
        cout<<endl;
        for(j=0;j<7;j++)
        {
            if(j>=i-3&&j<=9-i)
                cout<<"*";
            else
                cout<<" ";
        }
    }
    return 0;
}
