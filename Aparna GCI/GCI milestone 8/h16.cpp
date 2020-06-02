#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    char k='A';
    for(i=0;i<4;i++)
    {
        char l=k;
        cout<<endl;
        for(j=0;j<=i;j++)
            {
                cout<<l;
                l--;
            }
            k++;
    }
    return 0;
}
