#include <iostream>
using namespace std;
int main ()
{
    int i, j, k;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
          if (j>(4-i) && j<(4+i) && i <= 4)
                cout << "*";
          else if (i <=4)
                cout << " ";
          else if(j > (i-4) && j < 8 - (i-4))
                cout << "*";
          else
                cout << " ";
        }
        cout << "\n";
    }
}
