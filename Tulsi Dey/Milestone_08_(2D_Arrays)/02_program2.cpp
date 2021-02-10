/*
 Write user defined functions for square matrix to calculate

Left diagonal sum
Right diagonal sum

*/
#include <iostream>

using namespace std;
void printSum(int *arr, int n)
{
    int sum1 = 0, sum2 = 0, j = n - 1;
    for(int i = 0; i < n; i++)
    sum1 += *(arr + i*n + i);
    for(int i = 0; i < n; i++)
    {
        sum2 += *(arr + (j--)*n + i);
    }
    cout<<"Right diagonal sum: "<<sum2<<endl;
    cout<<"Left diagonal sum: "<<sum1<<endl;
}
int main()
{
    int n;
    cout<<"Enter N: "; cin>>n;
    int arr[n][n];

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];
    
    printSum(&arr[0][0], n);
    
    return 0;
}