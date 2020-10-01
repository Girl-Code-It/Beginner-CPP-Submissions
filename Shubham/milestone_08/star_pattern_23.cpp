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
       k=1;
       for(j=1; j<=n; j++)
       {
           if(j<=i)
            {
                cout << k;
                k = (k==0) ? 1 : 0;
            }
            else
                cout << " ";
       }
       cout << endl;
   }
    
}
