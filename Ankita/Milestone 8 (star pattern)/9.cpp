#include <iostream>
using namespace std;
int main ()
{
    int i, j, m;
    char k = 'A';
    for (i = 1; i <= 4; i++)
    {
        m = 1;
        k = 'A';
        if (i == 1)
            m = 0;
        for (j = 1; j <= 7; j++)
        {
            if(j<=(4-i+1) && j<4)
            {
                 cout << k;
                 k++;
            }
            else if(j>=(4+i-1) && j>= 4)
            {
                if (m==1)
                {
                    k = k - 1;
                    cout << k;
                    k--;
                    m = 0;
                }
                else
                {
                    cout << k;
                    k--;
                }
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
