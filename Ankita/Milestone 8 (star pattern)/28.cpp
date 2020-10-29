#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, j, m =1, k, h = 0;
    for (i = 1; i <= 5; i++)
    {
        if (i%2 == 1)
        {
            k = 1;
            m = h + 1;
        }
        else if (i%2 == 0)
        {
            k = 0;
            m = (m - 1) + (pow(i,2) - pow((i-1),2)) - (i- 1) ;
            h = m;
        }
        for (j = 1; j <= 9; j++)
        {
            if (j <= (pow(i,2) - pow((i-1),2)) )
            {
                if (j%2 == 0)
                    cout << "*";
                else
                {
                    if (k == 1)
                    {
                        cout << m;
                        m++;
                    }
                    else
                    {
                       cout << m;
                       m--;
                    }
                }

            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
