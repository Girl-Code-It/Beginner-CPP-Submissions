#include<cstdlib>
#include<iostream>

using namespace std;

int array_sum(int *, int);

int main()
{
    //program to print all negative elements in the array

    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index Number " << i << " :  " ;
        cin >> arr[i];
    }

    cout << "Sum of all elements is " <<  array_sum(arr, n);
}

int array_sum(int* rain, int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum += rain[i];
    }

    return sum;
}
