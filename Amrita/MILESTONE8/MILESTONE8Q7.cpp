



#include<iostream>
using namespace std;
 int main ()
 {
     for(int i=0;i<5;i++)
     {
         for (int j=0;j<9;j++)
           {

            if(j>(4-i)&&j<(4+i) )
            cout<<" ";
         else
            cout<<"*";
           }
           cout<<endl;
     }
 }

