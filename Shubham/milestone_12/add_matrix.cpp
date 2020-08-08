#include<cstdlib>
#include<iostream>

using namespace std;

void create(int [3][3], int, int);
void display(int [3][3], int, int);
void add(int [3][3], int [3][3] , int, int);
int main()
{
    //program to add two matrix

    int arr[3][3], rain[3][3];

    cout << "Enter elements of first Matrix" << endl << endl;
    create(arr, 3, 3);
    cout << "Enter elements of second Matrix" << endl << endl;
    create(rain, 3, 3);
    
    add(arr, rain, 3, 3);
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

void add(int arr[3][3], int rain[3][3], int row, int column)
{
    int i, j;
    int addition[3][3];
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            addition[i][j] = arr[i][j] + rain[i][j];
        }
    }

    display(arr, 3, 3);
    cout << endl;
    display(rain, 3, 3);
    cout << "The addition of above two matrix is " << endl;
    display(addition, 3, 3);
}
