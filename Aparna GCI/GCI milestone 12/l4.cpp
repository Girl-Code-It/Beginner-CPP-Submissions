#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;
    char k;
    k='A';
    for(i=0;i<5;i++)
    {
        char l=k+i;
        cout<<endl;
        for(j=0;j<5;j++)
        {
            if(i+j>=4)
                   {
                       if(j!=4)
                       {
                           cout<<l<<"*";
                           l--;
                           k++;
                       }
                       else
                       {
                           cout<<l;
                           l--;
                           k++;
                       }
                   }
            else
                cout<<"  ";
        }
    }
    return 0;
}
