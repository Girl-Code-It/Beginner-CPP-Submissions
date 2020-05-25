#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=6-i;
        cout<<endl;
        for(j=1;j<=5;j++)
        {
            if(j>=1&&j<=6-i)
            {
                if(i%2==1)
                cout<<j;
                else
                    {
                        cout<<k;
                        k--;
                    }
            }
            else
                cout<<" ";
        }
    }
    return 0;
}
