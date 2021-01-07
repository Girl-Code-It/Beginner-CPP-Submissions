/*
Pass a 2D array to function and access all its elements.

*/
#include <iostream>

using namespace std;

void pMatrix(int n, int *arr)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<*(arr + i*n + j)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter size of matrix: "; cin>>n;
    cout<<"Enter the matrix: "<<endl;
    int arr[n][n];

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];

    pMatrix(n,&arr[0][0]);

    return 0;
}