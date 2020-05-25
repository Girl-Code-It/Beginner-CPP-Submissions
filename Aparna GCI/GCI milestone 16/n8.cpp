#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x,y,t,s,i,j,a;
    a=0;
    cout<<"Enter the details : "<<endl;
    cin>>x>>y>>s>>t;
   for(i=x;i<x+s;i++)
   {
       for(j=y;j<y+s;j++)
       {
           if((i+j)<=t)
           {
               a++;
           }
       }
   }
   cout<<a;
   return 0;
}
