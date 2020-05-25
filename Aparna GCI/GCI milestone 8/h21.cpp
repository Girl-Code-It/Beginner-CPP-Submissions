#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    char k;
    for(i=0;i<4;i++)
    {
        k='A';
        cout<<endl;
        for(j=0;j<7;j++)
        {
            if(j>=4-i&&j<3+i)
                cout<<" ";
            else
                    cout<<k;
                    k++;
        }
    }
    return 0;
}

