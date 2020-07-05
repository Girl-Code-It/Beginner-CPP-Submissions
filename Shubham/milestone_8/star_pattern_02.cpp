#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n;

   cout << "Enter the number of lines you want to print \n";
   cin >> n;

   for(i=1; i<=n; i++)
   {
      for(j=1; j<=n; j++)
      {
         if(j >= n-i+1)
            cout << "*";
         else 
            cout << " ";
      }
      cout << endl;
   } 
}
