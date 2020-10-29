/*
2. Write user defined functions for square matrix to calculate
Left diagonal sum
Right diagonal sum
*/
#include<iostream>
#include<iomanip>
using namespace std;

void right_sum(int *arr, int rows, int cols)
{
    int right_sum=0;
    cout<<"\nSum of the elements of right diagonal of the array : ";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(i==j)
                right_sum+=*(arr + i*cols +j);
        }
    }
    cout<<right_sum;
}
void left_sum(int *arr, int rows, int cols)
{
    int left_sum=0, r=0, c=cols-1;
    cout<<"\nSum of the elements of left diagonal of the array : ";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(i==r && j==c)
            {
                left_sum+=*(arr + i*cols +j);
                r++; c--;
            }
        }
    }
    cout<<left_sum;
}
int main ()
{
    int rows, cols, i=0, j=0;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    int arr[rows][cols];

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }

    for(i=0; i<rows; i++)
    {
        cout<<"\n";
        for(j=0; j<cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    right_sum((int*)arr, rows, cols);
    left_sum((int*)arr, rows, cols);
    return 0;
}
