#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, l;
    cout << "Enter the number of lines you want to print\n";
    cin >> n;
   for(i=1; i<=n; i++)
   { 
       k=1;
       l=2;
       for(j=1; j<=i; j++)
       {
           if(i%2 != 0)
           {
               cout << " " << k;
               k = k+2; 
           }
           else
           {
               cout << " " << l;
               l = l + 2;
           }
           
           
       }
       for(j=1; j<=n-i; j++)
       {
           cout << "  ";
       }
       cout << endl;
   }
}
