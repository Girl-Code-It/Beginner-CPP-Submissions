



#include<iostream>
using namespace std;
 int main ()
 {

     for(int i=0;i<4;i++)
     {

           for (int j=0;j<8;j++)
           {

            if((i+j>=3) && (i+j<8))
            {

               cout<<"*";

            }

         else
            cout<<" ";
           }
           cout<<endl;
     }
 }



