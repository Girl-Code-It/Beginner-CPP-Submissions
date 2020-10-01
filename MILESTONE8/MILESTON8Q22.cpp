
#include<iostream>
using namespace std;
 int main ()
 {

     for(int i=0;i<6;i++)
     {
          int k=1;

         for (int j=0;j<6;j++)
           {

                if(j<=i)
                  {

                      cout<<k;
                       k=1-k;;
                  }
         else
             {
               cout<<" ";
             }

     }
     cout<<endl;
 }
 }


