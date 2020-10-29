#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n;
   char k, x;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
   k=65;
   for(i=1; i<=n; i++)
   {    
      k=64+i;
       for(j=1; j<=n; j++)
       {
          if(j<=i)
          {
            cout << k;
            k--;
          }
          else
            cout << " ";
       }
       x = k;
       cout << endl;
   }
    
}
