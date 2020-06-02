#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((j > (5-i) && i<=3) || (j > (i-1) && i>3 && i<=5) || (i>4 && i<=7 && j<=(i-4)) || (i>7 && j<= (10-i)) )
                cout << "* ";
            else if (j == 3 && i>3 && i<7)
                cout << "| ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}
