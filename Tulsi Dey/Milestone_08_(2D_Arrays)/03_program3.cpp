/*
Write a user-defined function in C++ to display the multiplication of row element 
of two-dimensional array A[4][6] containing integer.

*/
#include <iostream>

using namespace std;

void printMul(int *arr, int m, int n)
{
    int p = 1;
    for(int i = 0; i < m; i++)
    {
        p = 1;
        for(int j = 0; j < n; j++)
        {
            p *= *(arr + i*n + j);
        }
        cout<<"Product of row "<<(i + 1)<<": "<<p<<endl;
    }

}
int main()
{
    int m, n;
    cout<<"Enter M: "; cin>>m;
    cout<<"Enter N: "; cin>>n;
    int arr[m][n];
    
    cout<<"Enter the Matrix: "<<endl;
    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];

    printMul(&arr[0][0], m, n);

    return 0;
}