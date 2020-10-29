#include <iostream>
using namespace std;
int main()
{
    int i, j, m;
    for (i = 1; i <= 4; i++)
    {
        m = i;
        for (j = 1; j <= 7; j++)
        {
            if(j > (4-i) && j < (4+i))
            {
                if (j < 4)
                {
                    cout << m;
                    m--;
                }
                else if (j >= 4)
                {
                    cout << m;
                    m++;
                }
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
