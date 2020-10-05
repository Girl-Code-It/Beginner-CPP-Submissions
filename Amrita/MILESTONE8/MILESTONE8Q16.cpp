#include<iostream>
using namespace std;
 int main ()
 {
    int k=0;
    int p=1;
     for (int i=0; i<9;i++)
     {
          p=1;
         i<=4 ? k++:k--;
             if (i==0)
             {
                 k=0;
             }
             for (int j=0; j<5;j++)
         {

             if ((j>=(4-k))&& (j<=4))
               {
                cout<<p;
                p++;
                }

            else
            {
                cout<<" ";
            }
         }

         cout<<endl;

     }
     return 0;
 }

