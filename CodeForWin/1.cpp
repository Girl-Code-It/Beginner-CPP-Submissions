#include <iostream>
using namespace std;
  
  
 int cube( int a) 
 {
     int ans = a*a*a;
     return ans;
 }
  
int main()
{
    int a;
    cin>>a;
   
    cout << "Cube of "<<a<<" = "<<cube(a);
   
   
    return 0;
}