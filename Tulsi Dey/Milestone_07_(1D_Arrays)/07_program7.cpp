/*

Find the largest and smallest elements of an array.

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
    
    int max = INT_MIN, min = INT_MAX;

    for(int i = 0; i < n; i++)
    if(max < arr[i]) 
    max = arr[i];
    for(int i = 0; i < n; i++)
    if(min > arr[i]) 
    min = arr[i];

    cout<<"\nMax: "<<max;
    cout<<"\nMin: "<<min;

    return 0;
}