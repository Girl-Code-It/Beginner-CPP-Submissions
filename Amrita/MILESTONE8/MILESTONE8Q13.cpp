



#include<iostream>
using namespace std;
 int main ()
 {
     for(int i=0;i<4;i++)
     {
         for (int j=0;j<7;j++)
           {

            if((j>=3-(3-i))&&(j<=3+(3-i)) )
            cout<<"*";
         else
            cout<<" ";
           }
           cout<<endl;
     }
 }

