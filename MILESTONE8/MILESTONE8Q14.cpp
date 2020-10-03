



#include<iostream>
using namespace std;
 int main ()
 {
     int k=1;
     for(int i=0;i<4;i++)
     {
         for (int j=0;j<8;j++)
           {

                if(j>=(3-i)&&j<=(3+i) )
                  {
                      cout<<k;
                      j<=3 ? ++k:--k;
                  }
         else
             {
               cout<<" ";
             }

     }
     cout<<endl;
 }
 }
