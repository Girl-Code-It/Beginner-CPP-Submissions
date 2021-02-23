/*
Write a program to print sum, average of all numbers, smallest and largest element of an array.

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
    int sum = 0;

    for(int i = 0; i < n; i++)
    if(max < arr[i]) 
    max = arr[i];
    for(int i = 0; i < n; i++)
    if(min > arr[i]) 
    min = arr[i];

    for(int i = 0; i < n; i++)
    sum += arr[i];

    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<sum/n<<endl;
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;



    return 0;
}