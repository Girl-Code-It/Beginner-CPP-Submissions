#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<4;i++)
        {
            int k=1;
            cout<<endl;
            for(j=0;j<4;j++)
            {
                if(j>=3-i&&j<=3)
                   {
                       cout<<k;
                       k++;
                   }
                else
                    cout<<" ";
            }
        }
        for(i=4;i<7;i++)
        {
            int k=1;
            cout<<endl;
            for(j=0;j<4;j++)
            {
                if(j>=i-3&&j<=3)
                    {
                        cout<<k;
                        k++;
                    }
                else
                    cout<<" ";
            }
        }

    return 0;
}
