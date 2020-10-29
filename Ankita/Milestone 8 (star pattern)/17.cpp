#include <iostream>
using namespace std;
int main ()
{
    int i, j, k ;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j <= (6-i) || j >= (4+i) && i<6)
                cout << "*";
            else if (i<6)
                cout << " ";
            else if(j <= (i - 4) || j >= 9 - (i - 5))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}
