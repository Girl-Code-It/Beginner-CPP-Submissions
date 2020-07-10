#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n;
   char k;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
    k=0;
   for(i=1; i<=n; i++)
   {
       k=65;
       for(j=1; j<=2*n-1; j++)
       {
           if(j >= n+1-i && j <= n-1+i)
           {

                cout << k;
                if(j<n) k++;
                else    k--;
           }
            else
                cout << " ";
       }
    
       cout << endl;
   }

}
