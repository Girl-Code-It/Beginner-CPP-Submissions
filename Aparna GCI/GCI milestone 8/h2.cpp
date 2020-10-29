#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        k=1;
        cout<<endl;
        for(j=0;j<9;j++)
        {
            if(j>=4-i&&j<=4+i)
            {
                cout<<k;
                (j<4)?k++:k--;
            }
                else
                    cout<<" ";
        }
    }
    return 0;
}
