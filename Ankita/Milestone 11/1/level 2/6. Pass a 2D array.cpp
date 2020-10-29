#include <iostream>
using namespace std;
/*void Array(int (*a)[4], int row, int column)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << *(a[i] + j) << "\t";
        }
        cout << "\n";
    }
}*/
/*void Array(int a[][4], int row, int column)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }*/
void Array (int *a, int row, int column)
{
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << *(a + i*column + j) << "\t";
        }
        cout << "\n";
    }
}
int main ()
{
    int i,j, a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int r = 3, c = 4;
    Array((int*)a, r, c);

}
