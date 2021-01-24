/*
Write a program to multiply array A and B of order NxL and LxM

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
    int n, l, m;
    cout<<"Enter M: "; cin>>m;
    cout<<"Enter L: "; cin>>l;
    cout<<"Enter N: "; cin>>n;
    cout<<"Enter the 1st matrix: "<<endl;
    int arr[n][l];
    int brr[l][m];
    

    for(int i = 0; i < n; i++)
    for(int j = 0; j < l; j++)
    cin>>arr[i][j];

    cout<<"Enter the 2st matrix: "<<endl;

    for(int i = 0; i < l; i++)
    for(int j = 0; j < m; j++)
    cin>>brr[i][j];

    int mul[n][m];
    for(int i = 0; i < n; i++)
    {   
        for(int j = 0; j < m; j++)
        {
            mul[i][j] = 0;
            for(int k = 0; k < l; k++)
            {
                mul[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    
    printf("\nMultiplication: \n");
    printMat(n, &mul[0][0]);

    return 0;
}