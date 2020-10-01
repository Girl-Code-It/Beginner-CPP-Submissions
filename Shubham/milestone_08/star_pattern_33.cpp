#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n;
   char k;

   cout << "Enter number of lines you want to print : \n";
   cin >> n;

   for(i=1; i<=n; i++)
   {  
      k=65;
      for(j=1; j<=2*n-1; j++)
      {
         if(j>= n-i+2 && j<= n+i-2)
            cout << " ", k++;
         else
         {
            cout << k;
            k++;
         }
      }
      cout << endl;
   }
    
}
