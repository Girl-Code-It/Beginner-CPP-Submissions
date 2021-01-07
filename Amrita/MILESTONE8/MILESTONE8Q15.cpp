



#include<iostream>
using namespace std;
 int main ()
 {
     int k=6;
     for(int i=0;i<7;i++)
     {
         for (int j=0;j<7;j++)
           {

            if(i+j<=6 )
            {
                cout<<(k-j);

            }

         else
            cout<<" ";
           }
           k--;
           cout<<endl;
     }
 }

