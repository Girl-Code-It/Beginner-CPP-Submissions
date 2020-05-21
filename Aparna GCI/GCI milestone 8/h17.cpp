#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<7;i++)
    {
        cout<<endl;
        for(j=0;j<7;j++)
        {
            if((i==0||i==6||j==0||j==6)||((i>=2&&i<=4)&&(j>=2&&j<=4)))
            {
                if(i==3&&j==3)
                cout<<" ";
                else
                cout<<"*";
            }
            else
            cout<<" ";
        }
    }
}
