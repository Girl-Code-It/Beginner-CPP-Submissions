/*
4. Write a user defined function named Upper-half() which takes a two dimensional array A,
 with size N rows and N columns as argument and prints the upper half of the array.

e.g.,
2 3 1 5 0                              2 3 1 5 0
7 1 5 3 1                                1 5 3 1
2 5 7 8 1   Output will be:                1 7 8
0 1 5 0 1                                    0 1
3 4 9 1 5                                      5
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    int rows, cols, i=0, j=0;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    int arr[rows][cols];
    cout<<"\nEnter the elements of array : \n";
    for(int i=0; i<rows; i++)
    {
        cout<<"Enter "<<cols<<" elements for row "<<i+1<<" : ";
        for(int j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nElements of the array are : \n";
    for(int i=0; i<rows; i++)
    {
        cout<<" |";
        for(int j=0; j<cols; j++)
        {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<"| \n";
    }

    cout<<"\nUpper half of the matrix : \n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(j<i)
                cout<<" ";
            else
                cout<<arr[i][j];
        }
        cout<<"\n";
    }
}
