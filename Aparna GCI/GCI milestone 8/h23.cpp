#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    char k;
    k='\'';
    for(i=0;i<4;i++)
    {
        cout<<endl;
        for(j=0;j<7;j++)
        {
            if(j==i||j==6-i)
            {
                if(j<4)
                    cout<<"\\";
                else
                cout<<"/";
            }
            else
                cout<<"*";
        }
    }
   for(i=4;i<7;i++)
    {
        cout<<endl;
        for(j=0;j<7;j++)
        {
            if(j==6-i||j==i)
                {
                    if(j>=4)
                        cout<<"\\";
                        else
                    cout<<"/";
                }
            else
                cout<<"*";
        }
    }
    return 0;
}
