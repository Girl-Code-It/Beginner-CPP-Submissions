#include <iostream>
using namespace std;
int main ()
{
    int i, j, k;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 4; j++)
        {
          if (j <= i && i <= 4)
                cout << "*";
          else if (i<=4)
                cout << " ";
          else if (j <= (8-i) && i>4)
                cout << "*";
          else
                cout << " ";
        }
        cout << "\n";
    }
}
