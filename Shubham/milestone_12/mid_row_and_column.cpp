#include<cstdlib>
#include<iostream>

using namespace std;

void create(int [3][3], int, int);
void display(int [3][3], int, int);
void print(int [3][3], int, int);
int main()
{
    //program to print middle row and column of a 2d Matrix
    int arr[3][3], s_left;

    create(arr, 3, 3);
    display(arr, 3, 3);

    cout << endl << endl;
    print(arr, 3, 3);
}
void create(int arr[3][3], int row, int column)
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout << "Enter the value of index [" << i << "][" << j << "] : " ;
            cin >> arr[i][j];
        }
    }
}

void display(int arr[3][3], int row, int column)
{
    int i, j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }
}


void print(int arr[3][3], int row, int column)
{
    int i, j;

    cout << "Middle row of Matrix is :  ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(i==row/2)
            {
                cout << arr[i][j] << " , ";
            }
        }
    }

    cout << endl << "Middle column of Matrix is :  ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(j == column/2)
            {
                cout << arr[i][j] << " , ";
            }
        }
    }
}
