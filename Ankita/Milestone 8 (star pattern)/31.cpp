#include <iostream>
using namespace std;
int main()
{
    int i, j, k, m ;
    char l = 'A';
    for (i = 1; i <= 4; i++)
    {
        m = 1;
        l = 'A';
        k = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j > (4-i) && j < (4+i) && k)
            {
                if(i%2 == 1)
                {
                    cout << m;
                    m++;
                }
                else
                {
                    cout << l;
                    l++;
                }
                k = 0;
            }
            else if (j > (4-i) && j < (4+i) && k == 0)
            {
                cout << " ";
                k = 1;
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
