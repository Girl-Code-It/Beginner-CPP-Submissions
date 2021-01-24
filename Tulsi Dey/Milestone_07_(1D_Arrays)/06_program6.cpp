/*
Initialize and print all elements of a 2D array.

*/
#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int arr[5][5];
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    arr[i][j] = i + j;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
    {
        cout<<arr[i][j]<<" ";
    }
        cout<<endl;
    }
    
    return 0;
}