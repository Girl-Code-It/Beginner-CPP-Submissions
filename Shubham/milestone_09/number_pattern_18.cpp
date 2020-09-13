#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, l;
    cout << "Enter the number of lines you want to print\n";
    cin >> n;
    l=1;
   for(i=1; i<=n; i++)
   { 
       k=l;
       for(j=1; j<=n-i+1; j++)
       {
           cout << " " << k;
           k += 2;
       }
       for(j=1; j<=n-i; j++)
       {
           cout << "  ";
       }
       cout << endl;
       l += 2;
   }
}
