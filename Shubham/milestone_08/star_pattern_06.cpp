#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, k;

   cout << "Enter the number of lines you want to print \n";
   cin >> n;

   for(i=1; i<=n; i++)
   {
      k=1;
      for(j=1; j<=2*n-1; j++)
      {
         if(j>=n-i+1 && j<= n+i-1)
         {
            if(k==1) cout << "*";
            else     cout << " ";

            k = (k==1) ? 0 : 1;
         }
         else
            cout << " ";
         
      }
      cout << endl;
   } 
}
