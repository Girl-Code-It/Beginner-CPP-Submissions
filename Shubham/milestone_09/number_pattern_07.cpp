#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k;
    int first = 1, second = 6, thrid = 10, forth = 13, fifth = 15;

    cout << "Enter the number of lines you want to print\n";
    cin >> n;

   for(i=1; i<=n; i++)
   {
       k=i;
       for(j=1; j<=i; j++)
       {
           cout <<  " " << k;
           k--;
       }
       for(j=1; j<=n-i+1; j++)
       {
           cout << "  ";
       }
       cout << endl;
   }
}
