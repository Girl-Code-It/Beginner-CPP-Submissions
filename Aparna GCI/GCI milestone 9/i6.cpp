#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    k=1;
    for(i=1;i<=5;i++)
    {
        int l=k;
        cout<<endl;
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                cout<<l;
                l+=2;
            }
            else
                cout<<" ";
        }
        k+=2;
    }
    return 0;
}
