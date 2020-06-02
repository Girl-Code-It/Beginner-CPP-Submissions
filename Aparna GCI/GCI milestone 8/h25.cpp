#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    j=1;
    for(i=1;i<=5;i++)
    {
        if(i%2==1)
        {
            for(k=0;k<i;k++)
            {
                if(k!=i-1)
                {
                    cout<<j<<"*";
                }
                else
                {
                    cout<<j;
                }
                j++;
            }
        }
        else
        {
            for(k=j+i-1;k>=j;k--)
            {
                if(k!=j)
                {
                    cout<<k<<"*";
                }
                else
                {
                    cout<<k;
                }
            }
            j
            +=i;
        }
        cout<<endl;
    }
    return 0;
}
