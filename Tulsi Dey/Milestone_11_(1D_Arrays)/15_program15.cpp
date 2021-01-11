/*
Initialize a 2D array of 3*3 matrix. E.g.-
1	2	3
4	5	6
7	8	9

Check if the matrix is symmetric or not.

*/
#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    cout<<"Enter the 3x3 matrix: "<<endl;;
    int arr[n][n], brr[n][n];
    bool flag = true;

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin>>arr[i][j];

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    brr[i][j] = arr[j][i];

    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    if(brr[i][j] != arr[j][i])
    flag = false;

    if(flag) cout<<"Matrix is symmetric";
    else cout<<"Matrix is not symmetric";
        
    
    return 0;
}