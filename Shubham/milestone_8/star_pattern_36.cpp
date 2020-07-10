#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k;
    int first = 1, second = 6, thrid = 10, forth = 13, fifth = 15;

    cout << "Enter the number of lines you want to print\n";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        k=0;
        for(j=1; j<=n; j++)
        {
           if(j<=i)
            {
                cout << k;
            }
            else
                cout << " ";
            
            k += i-1;
        }
        cout << endl;
    }
}
