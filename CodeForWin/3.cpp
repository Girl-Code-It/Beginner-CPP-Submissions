#include <iostream>
using namespace std;
  
  
 int maximum( int a, int b) 
 {
     int mx;
     if(b>a)
     {
         mx = b;
     }
     
     else
     mx = a;
     
     return mx;
 }
 
    int minimum( int a, int b) 
 {
     int min;
     if(b<a)
     {
         min = b;
     }
     
     else
     min = a;
     
     return min;
 }
 
  
int main()
{
    int a,b;
    cin>>a>>b;
   
    cout << "Maximum of "<<a<<" and "<<b<<" = "<<maximum(a,b)<<endl;
    cout << "Minimum of "<<a<<" and "<<b<<" = "<<minimum(a,b)<<endl;
   
    return 0;
}