#include<cstdlib>
#include<iostream>

using namespace std;

void create(int [4][6], int, int);
void display(int [4][6], int, int);
void multi_row(int [4][6], int, int);

int main()
{
    //program to display multiplication of row elements
    int arr[4][6], s_left;

    create(arr, 4, 6);
    display(arr, 4, 6);

    cout << endl << endl;
    multi_row(arr, 4, 6);
}
void create(int arr[4][6], int row, int column)
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

void display(int arr[4][6], int row, int column)
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


void multi_row(int arr[4][6], int row, int column)
{
    int multi=1, i, j;

    for(i=0; i<row; i++)
    {   
        multi=1;
        for(j=0; j<column; j++)
        {
            cout << arr[i][j] << "   ";
            multi *= arr[i][j];
        }
        cout << "   =   " << multi << endl;
    }
}

