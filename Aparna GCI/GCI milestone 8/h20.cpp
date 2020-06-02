#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        int k=i+1;
        int l=k;
        cout<<endl;
       {
           for(j=0;j<7;j++)
            {
                if(j>=3-i&&j<=3+i)
                    {
                        cout<<k;
                        j<3?k--:k++;
                    }
                else
                    cout<<" ";
            }
            l++;
       }
    }
    return 0;
}
