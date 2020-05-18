#include <iostream>
using namespace std;
int main ()
{
    int i, j, m ;
    for (i = 1; i <= 6; i++)
    {
        m = 1;
        for (j = 1; j <= 6; j++)
        {
            if (j <= i)
            {
                if (m )
                {
                    cout << "1";
                    m = 0;
                }
                else
                {
                    cout << "0";
                    m = 1;
                }
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
