/*Write a function in C++ which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimension i.e. 3x3, 5x5, 7x7 etc...]
Example, if the array contents is

3  5  4
7  6  9
2  1  8

Output through the function should be :
Middle Row : 7 6 9
Middle column : 5 6 1*/
#include <iostream>
using namespace std;
void disp (int*a , int rows, int cols)
{
    int i, j;
    cout << "\n\nElements of middle row:\n";
    i = (rows-1)/2;
    for (j = 0; j < cols; j++)
    {
           cout << *(a + i*cols + j) << "\t";
    }

    cout << "\n\nElements of middle column:\n" ;
    j = (cols-1)/2;
    for (i = 0; i < cols; i++)
    {
           cout << *(a + i*cols + j) << "\t";
    }
}
int main ()
{
    int rows, cols, i, j, input ;
    string arr_name;
    cout << "Enter the name of the array: ";
    cin >> arr_name;
    cout << "Note: the 2D Array should be a square matrix with odd dimension i.e. 3x3, 5x5, 7x7 etc... \n";
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
