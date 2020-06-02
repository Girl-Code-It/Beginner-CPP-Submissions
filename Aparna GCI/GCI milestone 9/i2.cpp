#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    k=5;
    for(i=1;i<=5;i++)
    {
        k=6-i;
        cout<<endl;
        for(j=1;j<=i;j++)
        {
            if(k<=5)
                cout<<k++;
            else
                cout<<" ";
        }
    }
    return 0;
}
