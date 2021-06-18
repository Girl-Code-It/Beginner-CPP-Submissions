#include <iostream>
#include <cmath>
using namespace std;
  

 int isstrong( int a) 
 {
     int fact = 1, original =a, sum=0;
    
     while( a>0)
     {
         int last = a%10;
          
         for( int i=1; i<=last; i++)
          {
             fact = fact*i;
          }
     
         sum = sum + fact;
         a = a/10;
     }
     
     if( sum == original)
     {
         return 1;
     }
    
    return 0;
 }    
 
   void strong( int a, int b)
   {
       while( a<= b)
       {
           if(isstrong(a))
           {
               cout<<a<<endl;
           }
           
           a++;
       }
       
   }

int main()
{
    int a,b;
    cin>>a>>b;
   
   strong(a,b);
 
    return 0;
}