#include <iostream>
using namespace std;
int main()
{
    int i, k = 1, n = 0, l = 1, m = 1;
    for (i = 1; i <= 45; i++)
    {
        if ( i > (5 - l) && i < (5 + l))
        {
            if (m)
            {
                cout << "*";
                n++;
                m = 0;
            }
            else
            {
                cout << " ";
                m = 1;
                n++;
            }
        }

        else
        {
            cout << " ";
        }
        if (n == k)
       {
            cout << "\n";
            k = k + 2;
            n = 0;
            l++;
            i = 0;
            m = 1;
       }
        if ( l == 6)
            break;

}
}
