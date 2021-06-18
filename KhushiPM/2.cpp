#include <iostream>
using namespace std;
  
  
 int diameter( int a) 
 {
     int ans1 = a*2;
     return ans1;
 }
 
 float circumference( int a) 
 {
     float ans2 = 2*a*3.14;
     return ans2;
 }
 
  float area( int a) 
 {
     float ans3 = 3.14*a*a;
     return ans3;
 }
  
int main()
{
    int a;
    cin>>a;
   
    cout << "Diameter of circle with radius "<<a<<" = "<<diameter(a)<<endl;
   cout << "Circumference of  circle with radius "<<a<<" = "<<circumference(a)<<endl;
   cout << "Area of  circle with radius "<<a<<" = "<<area(a)<<endl;
   
    return 0;
}