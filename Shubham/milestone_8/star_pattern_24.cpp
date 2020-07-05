#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, k;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
   
   for(i=1; i<=n; i++)
   {    
       for(j=1; j<=n; j++)
       {
           if(j==1 || j==n || i==1 || i==n)
                cout << "*";

            else if(i>=3 && i<= n-2 && j>=3 && j<=n-2)
                cout << "*";
            else
                cout << " ";
       }
       cout << endl;
   }
    
}
