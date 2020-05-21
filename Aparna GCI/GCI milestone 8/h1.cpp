#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        cout<<endl;



    for(int k=4-i;k<=4+i;k++)
               if(i%2==0)
               {
                   if(k%2==0)
                cout<<"*";
            else
                cout<<" ";
               }
           else
           {

                if(k%2==0)
                    cout<<" ";
                else
                    cout<<"*";
           }
        }


    return 0;
}
