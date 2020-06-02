/*
5. Write a function in C++ which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimension i.e. 3x3, 5x5, 7x7 etc...]
Example, if the array contents is

3  5  4
7  6  9
2  1  8

Output through the function should be :
Middle Row : 7 6 9
Middle column : 5 6 1
*/
#include<iostream>
#include<iomanip>
using namespace std;

void middleTerms(int rows, int cols)
{
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
    cout<<"\nMiddle row of the matrix : \n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(i==(rows-1)/2)
                cout<<arr[i][j]<<" ";
        }
    }
    cout<<"\nMiddle column of the matrix : \n";
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if (j==(cols-1)/2)
                cout<<" "<<arr[i][j]
                ;
        }
        cout<<"\n";
    }
}
int main ()
{
    int rows, cols, i=0, j=0;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    int arr[rows][cols];

    middleTerms(rows, cols);
}
