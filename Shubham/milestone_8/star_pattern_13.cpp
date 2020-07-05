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
       k=i;
       for(j=1; j<n*2; j++)
       {
           if(j>=n-i+1 && j<=n+i-1)
           {
               cout << k;
               if(j<n)  k++;
                else     k--;
           }
           else
                cout << " ";
           
       }
       cout << endl;
   }

}
