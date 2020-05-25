#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=6-i;
        cout<<endl;
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                cout<<k;
                k++;
            }
            else
                cout<<"5";
        }
    }
    return 0;
}
