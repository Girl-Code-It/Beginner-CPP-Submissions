/*
Write a program to shift every element of an array to circularly right. E.g.-
INPUT : 1 2 3 4 5
OUTPUT : 5 1 2 3 4


*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: "; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    int aux = arr[n-1];
    for(int i = 1; i < n; i++)
    arr[n-1-i+1] = arr[n-1-i];
    arr[0] = aux;

    for(int i = 0; i < n; i++)
    cout<<arr[i]<<" ";

    return 0;
}