#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, k;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
   
   for(i=1; i<=2*n-1; i++)
   {
      k= 2*n-1-i;
       for(j=1; j<n*2; j++)
       {
           if(j<=2*n-i)
            {
                cout << k;
                if(k>0)
                    k--;
            }
            else
                cout << " ";
           
       }
       cout << endl;
   }

}
