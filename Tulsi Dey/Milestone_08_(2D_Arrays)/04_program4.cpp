/*
 Write a user defined function named Upper-half() which takes a two dimensional array A, 
 with size N rows and N columns as argument and prints the upper half of the array.

e.g.,
2 3 1 5 0                              2 3 1 5 0
7 1 5 3 1                                1 5 3 1
2 5 7 8 1   Output will be:                1 7 8
0 1 5 0 1                                    0 1
3 4 9 1 5                                      5

*/
#include <iostream>

using namespace std;

void upperHalf( int *arr, int n)
{
    cout<<endl<<"Upper-half: "<<endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<"  ";
        }
        for(int j = i; j < n; j++)
        {
            cout<<*(arr + i*n + j)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter N: "; cin>>n;
    int arr[n][n];

    cout<<"Enter the matrix:"<<endl;
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];
    
    upperHalf(&arr[0][0],n);
    
    return 0;
}