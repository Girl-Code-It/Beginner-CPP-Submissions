#include <iostream>
using namespace std;
int main ()
{
    int i, j;
    char m = '0'; char referm[] = {'0', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '9', '8', '7', '6', '5', '4', '3', '2', '1', '0','\0'};
    for (i = 1; i <= 21; i++)
    {
        m = referm[i];
        for (j = 1; j <= 21; j++)
        {
            if (j > (11-i) && j < (11+i) && i < 12)
            {
                if (j < 11)
                {
                    cout << m << " ";
                    if (m<'9')
                    m++;
                    else if (m>='9')
                    {
                        m = '0';
                    }
                }
                else if (j >= 11)
                {
                    cout << m << " ";
                     if ( m>'0')
                    m--;
                    else if (m == '0')
                    {
                        m = '9';
                    }
                }
            }
            else if (j > (i-11) && j < (33-i) && i >= 12)
            {
                if (j < 11)
                {
                    cout << m << " ";
                    if (m<'9')
                    m++;
                    else if (m>='9')
                    {
                        m = '0';
                    }
                }
                else if (j >= 11)
                {
                    cout << m << " ";
                     if ( m>'0')
                    m--;
                    else if (m == '0')
                    {
                        m = '9';
                    }
                }
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
