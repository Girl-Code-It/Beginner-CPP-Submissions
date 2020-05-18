#include <iostream>
using namespace std;
int main ()
{
    int i, j, k ;
    for (i = 1; i <= 9; i++)
    {
        k = 1;
        for (j = 1; j <= 5; j++)
        {
            if (j > (5-i) && i < 6)
            {
                cout << k;
                k++;
            }
            else if (i < 6)
                cout << " ";

            else if (j > (i -5) && i >= 6)
                {
                    cout << k;
                    k++;
                }
                else
                    cout << " ";
        }
        cout << "\n";
    }
}
