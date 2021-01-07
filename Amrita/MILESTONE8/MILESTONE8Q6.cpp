


#include<iostream>
using namespace std;
 int main ()
 {
    int k=0;
     for(int i=0;i<5;i++)
     {
         for (int j=0;j<9;j++)
           {

            if(j>=(4-i)&&j<=(4+i)&&k )
                {
                   cout<<"*";
                   k=0;
                }
         else
            {
                cout<<" ";
                k=1;
           }

     }
      cout<<endl;
 }
 }

