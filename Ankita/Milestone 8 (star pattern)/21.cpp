#include <iostream>
using namespace std;
int main ()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if ((i + j) == 5 || (i + j) == 6 || (i + j) == 7 || (i + j) == 8 ||(i + j) == 9 )
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
