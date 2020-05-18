#include <iostream>
using namespace std;
int main()
{
    int i, j;
    char k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j<=(4-i+1) || j>=(4+i-1))
            {
               switch (j)
               {

                case 1:
                    cout << 'A';
                    break;
                case 2:
                    cout << 'B';
                    break;
                case 3:
                    cout << 'C';
                    break;
                case 4:
                    cout << 'D';
                    break;
                case 5:
                    cout << 'E';
                    break;
                case 6:
                    cout << 'F';
                    break;
                case 7:
                    cout << 'G';
                    break;
               }
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
