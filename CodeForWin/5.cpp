#include <iostream>
#include <cmath>
using namespace std;
  
  
 void prime( int a) 
 {
     bool check = 0; 
     
     for( int i=2; i<=sqrt(a); i++)
     {
         if(a%i==0)
         {
            cout<<a<<" is not a prime number"<<endl;
             check = 1;
            break;
         }
     }
     
     if(check==0)
     {
          cout<<a<<" is a prime number"<<endl;
     }
 }    
 
 
 void armstrong( int a)
 {
     int y=0, original = a;
     
     
     while(a>0)
     {
         int last = a%10;
          y= y+ (last*last*last);
         a=a/10;
     }
     
     if( y==original)
     {
         cout<<original<<" an armstrong number "<<endl;
     }
     
     else
        cout<<original<<" not an armstrong number "<<endl;
     
 }
 
 void perfect( int a)
 {
     int count =0;
     for( int i=1; i<a; i++)
     {
         if( a%i == 0)
         {
             count = count + i;
         }
     }
     
      if( count==a)
      {
          cout<<a<<" is a perfect number"<<endl;
      }
      
      else
      cout<<a<<" is not a perfect number"<<endl;
 }
 
 
int main()
{
    int a;
    cin>>a;
   
   prime(a);
  armstrong(a);
  perfect(a);
   
    return 0;
}