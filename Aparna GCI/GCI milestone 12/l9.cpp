#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        cout<<endl;
        for(j=0;j<5;j++)
            if(j+i<4)
            cout<<" ";
        else
            cout<<"*";
    }
    return 0;
}
