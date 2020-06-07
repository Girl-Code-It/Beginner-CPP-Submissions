#include <iostream>
using namespace std;

int main()
{
   int n;

   cout<<"\n Enter a number: ";
   cin>>n;

   if(n % 2 == 0)
      cout<<"\n "<<n<<" is even";
   else
      cout<<"\n "<<n<<" is odd";
}
