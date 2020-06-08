#include <iostream>
using namespace std;

int main()
{
   int n;

   cout<<"\n Enter a number: ";
   cin>>n;

   if(n<0)
      cout<<"\n The number entered is negative.";
   else if (n==0)
      cout<<"\n The number entered is zero";
   else
      cout<<"\n The number entered is positive";
}
