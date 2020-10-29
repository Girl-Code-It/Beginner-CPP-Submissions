
#include<iostream>
using namespace std;
 int main ()
 {
     for(int i=0;i<5;i++)
     {
         for (int j=0;j<5;j++)
           {

            if(i<=j)
            cout<<"*";
         else
            cout<<" ";
           }
           cout<<endl;
     }
 }
