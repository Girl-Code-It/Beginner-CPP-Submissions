#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, k, p;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;

   for(i=1; i<=2*n-1; i++)
   {
       for(j=1; j<=2*n-1; j++)
       {
           if(i==j)
                cout << '\\';
            else if(i+j == 2*n)
                cout << '/';
            else
                cout << "*";
       }
      
       cout << endl;
   }

}
