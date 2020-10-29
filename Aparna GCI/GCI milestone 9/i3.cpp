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
        for(j=1;j<=5;j++)
        {
            if(j>=7-i&&j<=5)
                cout<<" ";
            else
                {
                    cout<<k;
                    k--;
                }
        }
    }
    return 0;
}
