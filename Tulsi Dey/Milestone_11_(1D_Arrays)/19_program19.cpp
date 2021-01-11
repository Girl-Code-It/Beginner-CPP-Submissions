/*
Write a program to add and multiply two 3x3 matrices.

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
    int n;
    cout<<"Enter size of matrix: "; cin>>n;
    cout<<"Enter the 1st matrix: "<<endl;
    int arr[n][n];
    int brr[n][n];
    

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];

    cout<<"Enter the 2st matrix: "<<endl;

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin>>brr[i][j];

    int sum[n][n];
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    sum[i][j] = arr[i][j] + brr[i][j];

    int mul[n][n], m;
    for(int i = 0; i < n; i++)
    {   
        for(int j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for(int k = 0; k < n; k++)
            {
                mul[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    
    printf("\nAddition: \n");
    printMat(n, &sum[0][0]);
    printf("\nMultiplication: \n");
    printMat(n, &mul[0][0]);



    return 0;
}