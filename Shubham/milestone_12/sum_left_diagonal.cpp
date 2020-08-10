#include<cstdlib>
#include<iostream>

using namespace std;

void create(int [3][3], int, int);
void display(int [3][3], int, int);
int sum_left_diagonal(int [3][3], int, int);

int main()
{
    int arr[3][3], s_left;

    create(arr, 3, 3);
    display(arr, 3, 3);
    s_left = sum_left_diagonal(arr, 3, 3);
    cout << "Sum of all elements of left diagonal is " << s_left << endl;
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

int sum_left_diagonal(int arr[3][3], int row, int column)
{
    int i, j, sum=0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            if(i==j)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
