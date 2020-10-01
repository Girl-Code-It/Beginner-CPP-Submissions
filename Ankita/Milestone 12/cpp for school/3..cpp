//Write a user-defined function in C++ to display the multiplication of row element of two-dimensional array A[4][6] containing integer.
#include <iostream>
using namespace std;
void disp (int *a, int rows, int cols)
{
    int i, j, multi;
    cout << "\n\n";
    for (i = 0; i < rows; i++)
    {
        multi = 1;
        for (j = 0; j < cols; j++)
             multi *= *(a + i*cols +j) ;

        cout << "Product of elements of row " << i << " of entered array = " << multi << "\n" ;
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
