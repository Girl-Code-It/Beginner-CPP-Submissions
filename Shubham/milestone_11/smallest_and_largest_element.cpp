#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);

int main()
{   
    //find smallest and largest element in array
    int n, low=0, high =0;

    cout << "Enter the number of elements in array : ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of Element " << i << " :  ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[low] > arr[i])
            low = i;
        if(arr[high] < arr[i])
            high = i;
    }

    cout << "The largest element in the array is " << arr[high] << endl;
    cout << "The smallest element in the array is " << arr[low] << endl;

}


void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}

