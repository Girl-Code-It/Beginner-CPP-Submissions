#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    k=1;
    for(i=0;i<5;i++)
    {
        int l;
        l=k;
        cout<<endl;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                if(i%2!=0)
               {
                   if(k>4)
                   {
                       if(i==j)
                        cout<<l+i+2;
                       else
                        cout<<l+i+2<<"*";
                       l--;
                      cout<<" "<<l<<" ";
                   }
                   if(i==j)
                   {
                       cout<<l+i;
                   else
                   cout<<l+i<<"*";
                   l--;
                   }
                   cout<<" "<<l<<" ";
               }
               else
                if(i==0)
                {
                    cout<<k;
                    k++;
                }
               else
               {
                   if(k>4)
                   {
                       if(i==j)
                        cout<<k+i+2;
                       else
                        cout<<k+i+2<<"*";
                       k++;
                   }
                   else
                   if(i==j)
                    cout<<k+i;
                   else
                    cout<<k+i<<"*";
                    k++;
               }
            }
        }
        //cout<<" "<<k<<" ";
    }
    return 0;
}
