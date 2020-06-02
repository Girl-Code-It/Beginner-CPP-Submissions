#include <iostream>
using namespace std;
int main()
{
    int i, j, m;
    for (i = 1; i <= 5; i++)
    {
        m = 0;
        for (j = 1; j <= 5; j++)
        {
            if ( j <= i)
            {
                cout << m << " ";
                m += i-1;
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
