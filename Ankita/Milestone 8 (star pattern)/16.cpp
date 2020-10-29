#include <iostream>
using namespace std;
int main ()
{
    int i, j, k ;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == j )
                cout << "\\";
            else if ((i+j) == 8)
                cout << "/";
            else
                cout << "*";
        }
        cout << "\n";
    }
}
