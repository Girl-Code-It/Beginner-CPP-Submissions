/*

Consider an integer array, the number of elements in which is determined by the user. 
The elements are also taken as input from the user. Write a program to find those pair of 
elements that has the maximum and minimum difference among all element pairs.

*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: "; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];

    sort(arr, arr+n);

    int minDiff = abs(arr[0] - arr[1]), max1 = arr[0], min1 = arr[1];

    for(int i = 0; i < n - 1; i++)
    {
        if(minDiff > abs(arr[i] - arr[i+1]))
        {max1 = max(arr[i], arr[i+1]);
        min1 = min(arr[i], arr[i+1]);
        minDiff = abs(arr[i] - arr[i+1]);}
    }

    cout<<"Maximum difference is between "<<arr[n-1]<<" and "<<arr[0]<<endl;
    cout<<"Minimum difference is between "<<max1<<" and "<<min1<<endl;

    return 0;
}