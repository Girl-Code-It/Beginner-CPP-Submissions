#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, k, p;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
    k=0;
   for(i=1; i<=2*n-1; i++)
   {
       for(j=1; j<=2*n-1; j++)
       {
           if(j>= n-k && j<= n+k && i != 1 && i != 2*n-1)
            {
                cout << " ";

            }
            else
                cout << "*";
       }
      if(i<n && i!=1)   k++;
      else if(i!=1)      k--;
       cout << endl;
   }

}
