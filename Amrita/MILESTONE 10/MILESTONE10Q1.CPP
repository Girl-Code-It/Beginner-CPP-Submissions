// PROGRAM TO CALCULATE THE CUBE OF A NUMBER USING FUNCTIONS
#include<iostream>
using namespace std;
 int cube (int a)
 {
     return a*a*a;
 }

 int main ()
 {
     int num;
     cout<<"ENTER THE NUMBER WHOSE CUBE YOU WANT TO CALCULATE\n";
     cin>>num;
     cube(num);
     cout<<"THE CUBE OF THE GIVEN NUMBER IS "<<cube(num);
     return 0;
 }
