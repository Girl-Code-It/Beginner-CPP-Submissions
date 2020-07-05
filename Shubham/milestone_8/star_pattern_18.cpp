#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, k, p;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
    k=0;
   for(i=1; i<=n; i++)
   {
       for(j=1; j<=2*n-1; j++)
       {
           if(j>=i && j<= 2*n - i)
                cout << "*";
            else
                cout << " ";
       }
    
       cout << endl;
   }

}
