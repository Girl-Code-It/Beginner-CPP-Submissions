/*

Write a program to check if elements of an array are same or not it read from front or back. 
E.g.-
2	3	15	15	3	2


*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: "; cin>>n;
    int arr[n];
    bool isPalin = true;
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    for(int i = 0; i < n; i++)
    if(arr[i] != arr[n-1-i])
    {
        isPalin = false;
        break;
    }
    if(isPalin) cout<<"Array is palindromic";
    else cout<<"Array is not palindromic";
    return 0;
}