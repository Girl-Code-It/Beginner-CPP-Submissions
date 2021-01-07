/*
Take 10 integer inputs from user and store them in an array and print them on screen.

*/
#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
    return 0;
}