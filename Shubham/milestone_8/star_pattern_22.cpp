#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, x;
  char k;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
   for(i=1; i<=n; i++)
   {    
       x=1;
       k=65;
       for(j=1; j<=2*n-1; j++)
       {
            if(j >= n-i+1 && j <= n+i-1)
            {
                if(j<=n)
                {
                    cout << x;
                    x++;
                }
                else
                {
                    cout << k;
                    k++;
                }
                
            }
          
            else
                cout << " ";
       }
    
       cout << endl;
   }

}
