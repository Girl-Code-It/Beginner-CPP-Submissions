/*
1. Write a menu driven C++ program to do following operation on two dimensional array A of size m x n.
You should use user-defined functions which accept 2-D array A, and its size m and n as arguments.
The options are:
To input elements into matrix of size m x n
To display elements of matrix of size m x n
Sum of all elements of matrix of size m x n
To display row-wise sum of matrix of size m x n
To display column-wise sum of matrix of size m x n
To create transpose of matrix B of size n x m
*/

#include<iostream>
#include<iomanip>
using namespace std;

int *input(int rows, int cols)
{
    int i, j, input;
    int *ptr = new int[rows*cols];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout <<"arr"<< "[" << i << "]" << "[" << j << "]: ";
            cin >> input;
            *(ptr + i*cols +j) = input;
        }
    }
    return (int*) ptr;
}
void display(  int *arr, int rows, int cols)
{
    cout<<"\nElements of the array are : \n";
    for(int i=0; i<rows; i++)
    {
        cout<<" |";
        for(int j=0; j<cols; j++)
        {
            cout<<setw(4)<<*(arr + i*cols +j);
        }
        cout<<"| \n";
    }
}
void sum(int *arr, int rows, int cols)
{
    int sum=0;
    cout<<"\nSum of the elements of array : ";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            sum += *(arr + i*cols +j) ;
        }
    }
    cout<<sum<<"\n";
}
void row_sum(int *arr, int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        int row_sum=0;
        cout<<"Sum of elements of row "<<i+1<<" : ";
        for(int j=0; j<cols; j++)
        {
            row_sum += *(arr + i*cols +j);
        }
        cout<<row_sum<<"\n";
    }
}
void col_sum(int *arr, int rows, int cols)
{
    for(int i=0; i<cols; i++)
    {
        int col_sum=0;
        cout<<"Sum of elements of column "<<i+1<<" : ";
        for(int j=0; j<rows; j++)
        {
            col_sum += *(arr + i*rows +j) ;
        }
        cout<<col_sum<<"\n";
    }
}
void transpose(int *arr, int rows, int cols)
{
    cout<<"\nTranspose of the array is : \n";
    for(int i=0; i<cols; i++)
    {
        cout<<" |";
        for(int j=0; j<rows; j++)
        {
            cout<<setw(4)<< *(arr + j*cols +i);
        }
        cout<<"| \n";
    }
}
int main ()
{
    int rows, cols, *ptr, i, j, choice;
    char cont = 'y';

    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    int arr[rows][cols];

    cout << "1. To input elements into matrix of size m x n\n2. To display elements of matrix of size m x n\n3. Sum of all elements of matrix of size m x n\n4. To display row-wise sum of matrix of size m x n\n5. To display column-wise sum of matrix of size m x n\n6. To create transpose of matrix B of size n x m";
    cout << "\nEnter your choice: ";
    cin >> choice;

    ptr = input(rows, cols);
    for (i = 0; i < rows; i++)
    {
        for (j = 0;j < cols; j++)
        {
            arr[i][j] = *(ptr + i*cols + j);
        }
    }

    while(1)
    {
    if (cont == 'Y' || cont == 'y')
    {
    switch (choice)
    {
        case 1:
            break;
        case 2:
           display((int*)arr, rows, cols);
           break;
        case 3:
            sum ((int*)arr, rows, cols); break;
        case 4:
            row_sum((int*)arr, rows, cols); break;
        case 5:
            col_sum ((int*)arr, rows, cols); break;
        case 6:
             transpose((int*)arr, rows, cols); break;
        default:
            cout << "Invalid input.";
            break;
    }
        cout << "\nDo you want to continue? (y/n)\n";
        cin >> cont;
        if (cont == 'Y' || cont == 'y')
        {
            cout << "Enter your choice: ";
            cin >> choice;
        }
    }
    else if(cont=='n' || cont=='N')
    {
        cout<<"\n\nGood Bye!";
        break;
    }
    else
    {
        cout<<"\n\nInvalid option. Bye!";
        break;
    }
    }
  return 0;
}
