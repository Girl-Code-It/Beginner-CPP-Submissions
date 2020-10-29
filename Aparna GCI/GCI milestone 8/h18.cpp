#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        int k=i;
        cout<<endl;
        for(j=0;j<9;j++)
        {
            if(j>=4-i&&j<=4+i)
            {
                cout<<k;
                j<4?k++:k--;
            }
            else
                cout<<" ";
        }
    }
    for(i=5;i<9;i++)
    {
        int k=8-i;
        cout<<endl;
        for(j=0;j<9;j++)
        {
            if(j>=i-4&&j<=12-i)
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
