//Write a user defined function named Upper-half() which takes a two dimensional array A, with size N rows and N columns as argument and prints the upper half of the array.
/*e.g.,
2 3 1 5 0                              2 3 1 5 0
7 1 5 3 1                                1 5 3 1
2 5 7 8 1   Output will be:                1 7 8
0 1 5 0 1                                    0 1
3 4 9 1 5                                      5*/
#include <iostream>
using namespace std;
void disp (int*a , int rows, int cols)
{
    int i, j;
    cout << "\n\n";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (j >= i)
                cout << *(a + i*cols +j) << "\t";
            else
                cout << "\t";
        }

        cout << "\n" ;
    }
}
int main ()
{
    int rows, cols, i, j, input ;
    string arr_name;
    cout << "Enter the name of the array: ";
    cin >> arr_name;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int arr[rows][cols];
    int *a = new int[rows*cols];
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            cout << arr_name << "[" << i << "]" << "[" << j << "]: ";
            cin >> input;
            *(a + i*cols +j) = input;
            arr[i][j] = *(a + i*cols +j);
        }
    cout << "Entered array:\n";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    disp ((int*) arr, rows, cols);

}
