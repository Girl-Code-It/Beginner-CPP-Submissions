#include <iostream>
using namespace std;
int main ()
{
    int i, j;
    int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    /*int a[3][4] =  {
                        {1,2,3,4},
                        {5,6,7,8},
                        {9, 10, 11, 12}
                   };
    int a[3][4] = {
                        1,2,3,4,
                        5,6,7,8,
                        9,10,11,12
                  };*/
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
