#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<7;i++)
    {
        cout<<endl;
        for(j=0;j<i;j++)
            {
                if(j%2==0)
                    cout<<"1";
                else
                    cout<<"0";
            }
    }
    return 0;
}
