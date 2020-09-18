#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, k, p;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
    k= 0;

   for(i=1; i<=2*n-1; i++)
   {
       p=1;
       for(j=1; j<=n; j++)
       {
           if(j>= n-k)
           {
                
                cout << p;
                p++;

           }
            else
                cout << " ";
           
       }
       if(i<n) k++;
       else    k--;
       cout << endl;
   }

}
