#include <iostream>
using namespace std;
int main ()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        int k = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j <= 9 - 2*i)
            {
                cout << k << " ";
                k++;
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
