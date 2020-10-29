#include <iostream>
using namespace std;
int main ()
{
    int i, j, m ;
    char k = 'A';

   for (i = 1; i <= 4; i++)
    {
        k = 'A';
        m = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j > (4-i) && j < (4+i))
            {
                if (j <= 4)
                {
                    cout << m;
                    m++;
                }
                else if(j > 4)
                {
                    cout << k;
                    k++;
                }
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
