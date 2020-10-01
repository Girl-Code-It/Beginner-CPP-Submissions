/*Write a menu driven C++ program to do following operation on two dimensional array A of size m x n. You should use user-defined functions which accept 2-D array A, and its size m and n as arguments. The options are:

To input elements into matrix of size m x n
To display elements of matrix of size m x n
Sum of all elements of matrix of size m x n
To display row-wise sum of matrix of size m x n
To display column-wise sum of matrix of size m x n
To create transpose of matrix B of size n x m*/
#include <iostream>
#include <string>
using namespace std;
int *getarray(int rows, int cols)
{
    string arr_name;
    cout << "Enter the name of the array: ";
    cin >> arr_name;
    int i, j, input;
    int *ptr = new int[rows*cols];
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            cout << arr_name << "[" << i << "]" << "[" << j << "]: ";
            cin >> input;
            *(ptr + i*cols +j) = input;
        }
    return (int*) ptr;
}
void disp_array(int *a, int rows, int cols)
{
    cout << "\n\nEntered array is:\n\n";
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            cout << *(a + i*cols +j) << "\t";
        cout << "\n";
    }

}
void sum(int *a, int rows, int cols)
{
    int i, j, sum = 0;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
             sum += *(a + i*cols +j) ;
    cout << "\n\nSum of elements of entered array = " << sum ;
}
void row_wise_sum(int*a, int rows, int cols)
{
    int i, j, sum;
    cout << "\n\n";
    for (i = 0; i < rows; i++)
    {
        sum = 0;
        for (j = 0; j < cols; j++)
             sum += *(a + i*cols +j) ;

        cout << "Sum of elements of row " << i << " of entered array = " << sum << "\n" ;
    }
}
void column_wise_sum(int*a, int rows, int cols)
{
    int i, j, sum;
    cout << "\n";
    for (i = 0; i < cols; i++)
    {
        sum = 0;
        for (j = 0; j < rows; j++)
             sum += *(a + j*rows +i) ;

        cout << "Sum of elements of column " << i << " of entered array = " << sum  << "\n";
    }
}
void transpose (int *a, int rows, int cols)
{
    cout << "\n\nTranspose of entered array is:\n\n";
    int i, j;
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
            cout << *(a + j*cols +i) << "\t";
        cout << "\n";
    }
}
void CHOICE(int choice, int rows, int cols, int*a)
{
    int i, j, arr[rows][cols];
    char cont = 'n';
    for (i = 0; i < rows; i++)
        for (j = 0;j < cols; j++)
        {
            arr[i][j] = *(a + i*cols + j);
        }
    switch (choice)
    {
        case 1:
            break;
        case 2:
           disp_array((int*)arr, rows, cols);
           break;
        case 3:
            sum ((int*)arr, rows, cols);
            break;
        case 4:
            row_wise_sum((int*)arr, rows, cols);
            break;
        case 5:
            column_wise_sum ((int*)arr, rows, cols);
            break;
        case 6:
             transpose((int*)arr, rows, cols);
             break;
        default:
            cout << "Invalid input.";
            break;
    }
    cout << "\nDo you want to continue? (y/n)\nNote: you can not enter choice 1 again.\n";
    cin >> cont;
    if (cont == 'Y' || cont == 'y')
    {
        cout << "Enter your choice: ";
        cin >> choice;
        CHOICE (choice, rows, cols, (int*)arr);
    }
    else if (cont != 'n' && cont != 'N' && cont != 'Y' && cont != 'y' || choice == 1)
    cout << "Invalid input.";

}
int main ()
{
    int rows, cols, *ptr, i, j, choice;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    int arr[rows][cols];
    cout << "1. To input elements into matrix of size m x n\n2. To display elements of matrix of size m x n\n3. Sum of all elements of matrix of size m x n\n4. To display row-wise sum of matrix of size m x n\n5. To display column-wise sum of matrix of size m x n\n6. To create transpose of matrix B of size n x m";
    cout << "\nEnter your choice: ";
    cin >> choice;
    ptr = getarray(rows, cols);
    for (i = 0; i < rows; i++)
        for (j = 0;j < cols; j++)
        {
            arr[i][j] = *(ptr + i*cols + j);
        }
    CHOICE (choice, rows, cols, (int*)arr);
    delete []arr;
    return 0;
}
