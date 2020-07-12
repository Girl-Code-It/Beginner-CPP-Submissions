#include<cstdlib>
#include<iostream>

using namespace std;

int second_largest(int *, int);

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

    cout << "The second largest element is " << second_largest(arr, n) << endl;
    
}

int second_largest(int* rain, int size)
{
    int largest1=0, largest2=0;

    //finding largest element

    for(int i=0; i<size; i++)
    {
        if(rain[i] > largest1)
            largest1 = rain[i];
    }

    //finding second largest

    for(int i=0; i < size; i++)
    {
        if(rain[i] > largest2 && rain[i] < largest1)
            largest2 = rain[i];
    }

    return largest2;
}
