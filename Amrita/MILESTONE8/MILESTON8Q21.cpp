
#include<iostream>
using namespace std;
 int main ()
 {

     for(int i=0;i<4;i++)
     {
         int k=1;
         char ch='A';
         for (int j=0;j<7;j++)
           {

                if(j>=(3-i)&&j<=(3+i) )
                  {

                      j<=3 ? cout<<k++ : cout<<ch++ ;
                  }
         else
             {
               cout<<" ";
             }

     }
     cout<<endl;
 }
 }

