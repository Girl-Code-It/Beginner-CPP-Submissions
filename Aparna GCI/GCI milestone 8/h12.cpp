#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    char k;
    for(i=0;i<4;i++)
    {
        int l=1;;
        k='A';
        cout<<endl;
        for(j=0;j<8;j++)
        {
            if(j>=3-i&&j<=4+i)
            {
                if(j<4)
                {
                    cout<<k;
                    k++;
                }
                else
                {
                    cout<<l;
                    l++;
                }
            }
            else
                cout<<" ";
        }
    }
    return 0;
}
