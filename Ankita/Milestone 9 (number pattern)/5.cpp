#include <iostream>
using namespace std;
int main ()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        int k = 6 - i;
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
            {
                cout << k << " ";
                k--;
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
