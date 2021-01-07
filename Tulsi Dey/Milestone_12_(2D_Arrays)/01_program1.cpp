/*
Write a menu driven C++ program to do following operation on two dimensional array A of size m x n. 
You should use user-defined functions which accept 2-D array A, and its size m and n as arguments. 
The options are:

0. To input elements into matrix of size m x n
1. To display elements of matrix of size m x n
2. Sum of all elements of matrix of size m x n
3. To display row-wise sum of matrix of size m x n
4. To display column-wise sum of matrix of size m x n
5. To create transpose of matrix B of size n x m

*/
#include <iostream>

using namespace std;

void print(int *arr, int m, int n);
void sum(int *arrn, int m, int n);
void rowSum(int *arr, int m, int n);
void colSum(int *arr, int m, int n);
void transpose(int *arr, int m, int n);
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

    int choice;
    cout<<"Enter option (1-5): \n 1. To display elements of matrix of size m x n \n 2. Sum of all elements of matrix of size m x n \n 3. To display row-wise sum of matrix of size m x n \n 4. To display column-wise sum of matrix of size m x n \n 5. To create transpose of matrix B of size n x m "<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
    print(&arr[0][0], m, n);
    break;

    case 2:
    sum(&arr[0][0], m, n);
    break;
    
    case 3:
    rowSum(&arr[0][0], m, n);
    break;
    
    case 4:
    colSum(&arr[0][0], m, n);
    break;
    
    case 5:
    transpose(&arr[0][0], m, n);
    break;

    default: cout<<"Enter option correctly!!"<<endl;
    }

    return 0;
}
void print(int *arr, int m, int n)
{
    cout<<"Print Matrix: "<<endl;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<*(arr + i*n + j)<<" ";
        }
        cout<<endl;
    }
}
void sum(int *arr, int m, int n)
{
    int sum = 0;
    cout<<"Sum of all elements of Matrix: "<<endl;
    for(int i = 0; i < m; i++)
    for(int j = 0; j < n; j++)
    sum += *(arr + i*n + j);
    cout<<sum<<endl;

}
void rowSum(int *arr, int m, int n)
{
    int rSum = 0;
    cout<<"Sum of rows of Matrix: "<<endl;
    for(int i = 0; i < m; i++)
    {
        rSum = 0;
        for(int j = 0; j < n; j++)
        {
            rSum += *(arr + i*n + j);
        }
        cout<<"Sum of row "<<(i+1)<<": "<<rSum<<endl;
    }
    cout<<endl;

}
void colSum(int *arr, int m, int n)
{
    int cSum = 0;
    cout<<"Sum of columns of Matrix: "<<endl;
    cSum = 0;
    for(int i = 0; i < n; i++)
    {
        int j = 0;
        cSum = 0;
        while(j < m)
        {
            cSum += *(arr + (j++)*n + i);
        }
        cout<<"Sum of column "<<(i+1)<<": "<<cSum<<endl;
    }
    cout<<endl;

}
void transpose(int *arr, int m, int n)
{
    int b[n][m];
    cout<<"transpose of matrix B of size "<<n<<"x"<<m<<endl;
    for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
    b[i][j] = *(arr + i + j*n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}