#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        cout<<endl;
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                if(j%2==1)
                    cout<<"1";
                else
                    cout<<"0";
            }
            else
            {
                if(j%2==1)
                    cout<<"0";
                else
                    cout<<"1";
            }
        }
    }
    return 0;
}
