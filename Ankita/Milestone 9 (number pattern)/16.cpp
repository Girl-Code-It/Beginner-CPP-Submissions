#include <iostream>
using namespace std;
int main ()
{
    int i, j, k = 1;
    for (i = 1; i <= 4; i++)
    {
        if (i%2 == 1)
             k = 1;
        else
            k = 0;
        for (j = 1; j <= 4; j++)
        {
            if (j <= i)
            {
                cout << k << " ";
                if (k == 1)
                    k = 0;
                else
                    k = 1;
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
