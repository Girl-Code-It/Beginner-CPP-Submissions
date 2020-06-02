#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char m, h = (char)64;
    for (i = 1; i <= 5; i++)
    {
        m = h + (char)i ;
        h = m++;
        m--;
        for (j = 1; j <= 5; j++)
        {
            if (j > (5-i))
            {
               cout << m << " ";
               m--;
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
