#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    k=1;
    for(i=0;i<5;i++)
    {
        cout<<endl;
        for(j=0;j<5;j++)
        {
            if((i==j)||j==4-i)
                cout<<"*";
                else
                    cout<<" ";

        }
    }
    return 0;
}
