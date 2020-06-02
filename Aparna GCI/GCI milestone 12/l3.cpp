#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k,l;
    k=1;
    for(i=0;i<5;i++)
    {
        l=k;
        cout<<endl;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                if(i%2==1)
                {
                    if(i==j)
                    cout<<l+i;
                    else
                    cout<<l+i<<"*";
                    l--;
                }
                else
                {
                    if(i==j)
                        cout<<k;
                    else
                        cout<<k<<"*";
                }
                k++;
            }
            else
                cout<<" ";
        }
    }
    return 0;
}
