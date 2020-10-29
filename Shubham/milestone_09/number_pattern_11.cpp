#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k;
    int first = 1, second = 6, thrid = 10, forth = 13, fifth = 15;

    cout << "Enter the number of lines you want to print\n";
    cin >> n;
    k=2*n-1;
   for(i=1; i<=n; i++)
   {    
       for(j=1; j<=k; j++)
       {
           cout <<  " " << j;
       }
       for(j=1; j<=n-i+1; j++)
       {
           cout << "  ";
       }
       cout << endl;
       k--, k--;
   }
}
