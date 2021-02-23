/*
Write a program to add two array A and B of size m x n.

*/
#include <iostream>

using namespace std;

void printMat(int n, int *arr)
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
    int n, m;
    cout<<"Enter M: "; cin>>m;
    cout<<"Enter N: "; cin>>n;
    cout<<"Enter the 1st matrix: "<<endl;
    int arr[m][n];
    int brr[m][n];
    

    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];

    cout<<"Enter the 2st matrix: "<<endl;

    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    cin>>brr[i][j];

    int sum[n][n];
    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    sum[i][j] = arr[i][j] + brr[i][j];
    
    printf("\nAddition: \n");
    printMat(n, &sum[0][0]);

    return 0;
}