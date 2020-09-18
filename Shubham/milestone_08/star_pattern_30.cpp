#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, l;

    cout << "Enter the number of lines you want to print\n";
    cin >> n;
    k=0, l=2;
    for(i=1; i<=n*2-1; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i <= n)
            {
                if(i==5 && j==1)
                    cout << " *";

                else if(i > 3 && j == 3 && i<=6)
                    cout << " |";
                else    if(j>=5-k)
                {
                    cout << " *";
                }
                else
                {
                    cout << "  ";
                }
                
            }
            else
            {
                if(j==3 && i==5+1)
                    cout << " |";
                 else if(j<=l)
                    cout << " *";
                else
                    cout << "  ";


              
            }
            
            
        }
        if(i>5)
          (i<7) ? l++ : l--;
        cout << endl;
        (i<3) ? k++ : k--;
      
    }
}
