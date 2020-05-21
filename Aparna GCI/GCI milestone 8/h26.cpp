#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        int k=1;
        char l='A';
        cout<<endl;
        for(j=4-i;j>0;j--)
        {
            cout<<" ";
        }
        for(j=0;j<i+1;j++)
        {
            if(i%2==0)
                {
                    cout<<k<<" ";
                    k++;
                }
                else
                    {
                        cout<<l<<" ";
                        l++;
                    }
        }
     }
    return 0;
}
