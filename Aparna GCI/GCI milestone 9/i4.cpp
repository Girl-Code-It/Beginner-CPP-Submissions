#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=5;
        cout<<endl;
        for(j=1;j<=i;j++)
        {
            cout<<k;
            k--;
        }
    }
    return 0;
}
