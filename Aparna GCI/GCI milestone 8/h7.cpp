#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<5;i++)
    {int k=i;
        cout<<endl;
        for(j=0;j<8;j++)
        {
                if(j>=5-i&&j<=3+i)
               {
                   cout<<k;
                   j<4?k++:k--;
               }
            else
                cout<<" ";
            }
     }
    return 0;
}
