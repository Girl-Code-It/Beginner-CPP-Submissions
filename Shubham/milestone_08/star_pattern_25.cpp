#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, p;
    n=11;
    k = 0;
    for (i = 1; i <= 2*n-1; i++)
    {
        p = i-1;
        for (j = 1; j <= 2*n-1; j++)
        {
            if (j >= n - k && j <= n + k)
            {
                
                cout <<  " " << p%10;

                if(j<11) p++;
                else     p--;
            }
            else
            {
                cout << "  ";
            }
        }
        (i < n) ? k++ : k--;
        cout << endl;
    }
}
