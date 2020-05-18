#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char k[] = {'a', 'A', 'B', 'C', 'D', '\0'}, m;
    for (i = 1; i <= 4; i++)
    {
        char m = k[i];
        for (j = 1; j <= 4; j++)
        {
            if (j <= i)
            {
                cout << m;
                m--;
            }
        }
        cout << "\n";
    }
}
