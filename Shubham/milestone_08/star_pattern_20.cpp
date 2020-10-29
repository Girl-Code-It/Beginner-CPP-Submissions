#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
   int i, j, n, x;
   char k;

   cout << "Enter number of lines you want to print: \n" ;
   cin >> n;
    k=0;
   for(i=1; i<=n; i++)
   {    k = 65;
        x = 1;
       for(j=1; j<=2*n; j++)
       {
           if(j>= n-i+1 && j<=n+i)
            {
                if(j<=n)
                {
                    cout << k;
                    k++;
                }
                else
                {
                    cout << x;
                    x++;
                }
                
            }
          
            else
                cout << " ";
       }
    
       cout << endl;
   }

}
