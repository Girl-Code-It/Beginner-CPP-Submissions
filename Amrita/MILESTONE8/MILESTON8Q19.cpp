



#include<iostream>
using namespace std;
 int main ()
 {

     for(int i=0;i<4;i++)
     {
            char k='A';
            int p=1;
           for (int j=0;j<8;j++)
           {

            if(j>=(3-i)&&j<=(4+i) )
            {

               j<=3?cout<<k++:cout<<p++;

            }

         else
            cout<<" ";
           }
           cout<<endl;
     }
 }


