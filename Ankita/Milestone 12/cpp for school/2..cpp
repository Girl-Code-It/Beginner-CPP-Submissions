/*Write user defined functions for square matrix to calculate

Left diagonal sum
Right diagonal sum*/
#include <iostream>
using namespace std;
int main ()
{
    int rows, cols, i, j, input, choice, sum = 0;
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
    cout << "1. Left diagonal sum\n2. Right diagonal sum\n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 2)
    {
        for (i = 0; i < rows; i++)
            for (j = 0; j < cols; j++)
            {
                if (i == j)
                    sum += arr[i][j];
            }
        cout << "Right diagonal sum = " << sum;
    }
    if (choice == 1)
    {
        for (i = 0; i < rows; i++)
            for (j = 0; j < cols; j++)
            {
                if (i + j == cols -1)
                    sum += arr[i][j];
            }
        cout << "Left diagonal sum = " << sum;
    }

}
