#include <iostream>
using namespace std;
int main ()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        if (i%2 == 1)
            k = 1;
        else
            k =2;
        for (j = 1; j <= 5; j++)
        {
            if (j <= i)
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
