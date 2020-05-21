#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,l;
    char k;

    k='A';
    for(l=0;l<7;l++)
        {
            cout<<k;
            (l<3)?k++:k--;
        }
   for(i=0;i<4;i++)
    {
        k='A';
        cout<<endl;
        for(j=0;j<7;j++)
        {
            if(j>=3-i&&j<=3+i)
                cout<<" ";
            else
            {
                if(j<=3)
                {
                    cout<<k;
                     k++;
                }
                else
                   {
                     k--;
                     cout<<k;
                   }
            }
        }
    }
    return 0;
}

