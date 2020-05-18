#include <iostream>
using namespace std;
int main ()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        int k = 2*i - 1;
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
            {
                cout << k << " ";
                k += 2;
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
