#include<iostream>
using namespace std;
 int main ()
 {
    int k=0;
     for (int i=0; i<7;i++)
     {
         i<=3?k++:k--;
             if (i==0)
             {
                 k=0;
             }
             for (int j=0; j<4;j++)
         {

             if (j>=0 && j<=k)
               {
                cout<<"*";
                }

            else
            {

            }
         }

         cout<<endl;
     }
     return 0;
 }
