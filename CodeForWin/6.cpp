#include <iostream>
#include <cmath>
using namespace std;
  
  
 
 int isprime( int a)
 {
     for( int i=2; i<=a/2; i++ )
    { 
      if( a%i==0)
      {
        return 0;
      }
    }
   return 1;
     
 }
 
  
 void prime( int a, int b) 
 {
     while( a<=b)
     {
         if( isprime(a))
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
   
   prime(a , b);
 
    return 0;
}