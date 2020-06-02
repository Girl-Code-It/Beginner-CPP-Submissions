#include <iostream>
using namespace std;
int main ()
{
    int i, j, k ;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j <= (8-i))
                switch(i+j)
                {
                    case 2:
                        cout << "6 ";
                        break;
                    case 3:
                        cout << "5 ";
                        break;
                    case 4:
                        cout << "4 ";
                        break;
                    case 5:
                        cout << "3 ";
                        break;
                    case 6:
                        cout << "2 ";
                        break;
                    case 7:
                        cout << "1 ";
                        break;
                    case 8:
                        cout << "0 ";
                        break;
                }
            else
                cout << " ";
        }
        cout << "\n";
    }
}
