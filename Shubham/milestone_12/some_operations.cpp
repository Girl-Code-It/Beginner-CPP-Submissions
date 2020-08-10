#include<cstdlib>
#include<iostream>

using namespace std;

void create(int [3][3], int, int);
void display(int [3][3], int, int);
void sum_all(int [3][3], int, int);
void sum_row(int [3][3], int, int);
void sum_column(int [3][3], int, int);
void transpose(int [3][3], int, int);;

int main()
{
    cout << "1 to create a 3*3 Matrix" << endl;
    cout << "2 to display the Matrix" << endl;
    cout << "3 to find sum of all elements" << endl;
    cout << "4 to find sum row wise" << endl;
    cout << "5 to find sum column wise" << endl;
    cout << "6 to find transpose of Matrix" << endl;
    cout << "7 to exit" << endl;

    int arr[3][3], choice;

    

    while(1)
    {
        cout << endl << "Enter your choice" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1 : create(arr, 3, 3);
                break;
            
            case 2 : display(arr, 3, 3);
                break;
            
            case 3 : sum_all(arr, 3, 3);
                break;

            case 4 : sum_row(arr, 3, 3);
                break;
            
            case 5 : sum_column(arr, 3, 3);
                break;

            case 6 : transpose(arr, 3, 3);
                break;

            case 7 : exit(0);
                break;

            default : cout << "Please enter a valid option";
        }
    }
}

void create(int arr[3][3], int row, int column)
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout << "Enter the value of index [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }
    }
}
void display(int arr[3][3], int row, int column)
{
    int i, j;
    for(int i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }
}
void sum_all(int arr[3][3], int row, int column)
{
    int i, j, sum=0;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements of the matrix is " << sum << endl;
}
void sum_row(int arr[3][3], int row, int column)
{
    int i, j, sum=0;
    for(i=0; i<row; i++)
    {   
        sum=0;
        for(j=0; j<column; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << "  =  " << sum << endl;
    }
}
void sum_column(int arr[3][3], int row, int column)
{
    int sum=0, i,  j;
    display(arr, row, column);
    for(i=0; i<12; i++)
        cout << '-';
    cout << endl;
    for(i=0; i<row; i++)
    {
        sum = 0;
        for(j=0; j<row; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << "  ";
    }
    cout << endl;
}
void transpose(int arr[3][3], int row, int column)
{
    int i, j;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout<< arr[j][i] << "  ";
        }
        cout << endl;
    }
}
