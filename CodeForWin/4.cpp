#include <iostream>
using namespace std;
  
  
 void even_odd( int a) 
 {
     int ans;
     if(a%2==0)
     {
        cout<<a<<" is an even number"<<endl;
     }
     
     else
      cout<<a<<" is an odd number"<<endl;
  
 }
 
int main()
{
    int a;
    cin>>a;
   
    even_odd(a);
  
   
    return 0;
}