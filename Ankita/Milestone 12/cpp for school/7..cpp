//Write a program to multiply array A and B of order NxL and LxM
#include <iostream>
using namespace std;
int main ()
{
    int rows1, cols1, i, j, input, rows2, cols2, sum;
    string arr_name1, arr_name2;
    cout << "Enter the name of the first array: ";
    cin >> arr_name1;
    cout << "Enter number of rows for first array: ";
    cin >> rows1;
    cout << "Enter number of columns for first array: ";
    cin >> cols1;
    int arr1[rows1][cols1];
    int *a = new int[rows1*cols1];
    for (i = 0; i < rows1; i++)
        for (j = 0; j < cols1; j++)
        {
            cout << arr_name1 << "[" << i << "]" << "[" << j << "]: ";
            cin >> input;
            *(a + i*cols1 +j) = input;
            arr1[i][j] = *(a + i*cols1 +j);
        }
    cout << "Enter the name of the second array: ";
    cin >> arr_name2;
    cout << "Enter number of rows for second array: ";
    cin >> rows2;
    cout << "Enter number of columns for second array: ";
    cin >> cols2;
    int arr2[rows2][cols2];
    int *b = new int[rows2*cols2];
    for (i = 0; i < rows2; i++)
        for (j = 0; j < cols2; j++)
        {
            cout << arr_name2 << "[" << i << "]" << "[" << j << "]: ";
            cin >> input;
            *(b + i*cols2 +j) = input;
            arr2[i][j] = *(b + i*cols2 +j);
        }
    cout << "Array " << arr_name1 << " :\n";
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            cout << arr1[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\nArray " << arr_name2 << " :\n";
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            cout << arr2[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\nProduct of matrices " << arr_name1 << " and " << arr_name2 << " is:\n";
    for(i = 0; i < rows1; i++)
    {
         for (j = 0; j < rows2; j++)
        {
            sum = 0;
            for (int k = 0; k < cols1; k++)
            {
                sum += arr1[i][k]* arr2[k][j];
            }
            cout << sum << "\t";
        }
        cout << "\n";
    }

}
