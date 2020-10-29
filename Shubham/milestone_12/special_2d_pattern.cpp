#include<cstdlib>
#include<iostream>

using namespace std;

void create(int [5][5], int, int);
void display(int [5][5], int, int);
void upper_half(int [5][5], int, int);
int main()
{
    //program to display multiplication of row elements
    int arr[5][5], s_left;

    create(arr, 5, 5);
    display(arr, 5, 5);

    cout << endl << endl;
    upper_half(arr, 5, 5);
}
void create(int arr[5][5], int row, int column)
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

void display(int arr[5][5], int row, int column)
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


void upper_half(int arr[5][5], int row, int column)
{
    int i,j;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(j>=i)
            {
                cout << arr[i][j] ;
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }
}
