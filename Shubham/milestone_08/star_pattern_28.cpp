#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, f, p=1, odd=1, count=0;

    cout << "Enter the number of lines you want to print " << endl;
    cin >> n;
    k=1;
    for(i=1; i<=n; i++)
    {   
         p = k+ i-1;
        for(j=1; j<=2*n-1; j++)
        {
            if(j<= 2*i -1)
            {
                if( j%2 != 0)
                {
                   if(i%2 != 0)
                        cout << k;
                    else
                    {

                        cout << p;
                        p--;
                    }
                   k++;
                   
                }
                else
                    cout << "*";


            }



            else
                cout << " ";                
                
        }
                           
                
        
        cout << endl;
    }
}
