#include <iostream>
using namespace std;
int main ()
{
    int i, j, k, l = 1;
    for (i = 1; i <= 5; i++)
    {
        if (l == 1)
        {
            k = 1;
            l = 0;
        }
        else
        {
            k = 6 - i;
            l = 1;
        }
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i && l == 0)
            {
                cout << k << " ";
                k ++;
            }
            else if (j <= 6 - i && l == 1)
            {
                 cout << k << " ";
                 k --;
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
