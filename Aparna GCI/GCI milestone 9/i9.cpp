#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        int l=2;
        cout<<endl;
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                cout<<k;
                k+=2;
            }
            else
            {
                cout<<l;
                l+=2;
            }
        }
    }
    return 0;
}
