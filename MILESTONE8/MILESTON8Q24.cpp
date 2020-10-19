
#include<iostream>
using namespace std;
 int main ()
 {

     for(int i=0;i<6;i++)
     {

int n=0;
         for (int j=0;j<6;j++)
           {

                if(j<=i)
                  {
                   int    k=i*n;
                      cout<<k;
                      n++;

                  }
         else
             {
               cout<<" ";
             }

     }
     cout<<endl;
 }
 }


