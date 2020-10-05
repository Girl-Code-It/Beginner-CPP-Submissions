



#include<iostream>
using namespace std;
 int main ()
 {
     int k;
     for(int i=0;i<4;i++)
     {   k=1;
     int num=1;
     char ch='A';
         for (int j=0;j<8;j++)
           {

                if(j>=(3-i)&&j<=(3+i))
                  {
                      if (k)
                      {
                          if (i%2==0)
                            {
                                cout<<num++;
                            }
                            else
                                cout<<ch++;

                      }
                     else
                     {
                         cout<<" ";

                     }
                     k=1-k;
                  }
         else
             {
               cout<<" ";
             }

     }
     cout<<endl;
 }
 }

