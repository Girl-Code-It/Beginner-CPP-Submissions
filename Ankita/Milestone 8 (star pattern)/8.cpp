#include <iostream>
using namespace std;
int main ()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        k = 1;
        for (j = 1; j <= 7; j++)
        {
            if(j>(4-i) && j<(4+i) && j<4)
            {
                 cout << k;
                 k++;
            }
            else if(j > (4-i) && j < (4+i) && j >= 4)
            {
                 cout << k;
                 k--;
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
