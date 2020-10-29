#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    for(i=0;i<8;i++)
    {
        k=6-i;
        cout<<endl;
        for(j=6;j>=i;j--)
            {
               cout<<k;
               k--;

            }
    }
    return 0;
}
