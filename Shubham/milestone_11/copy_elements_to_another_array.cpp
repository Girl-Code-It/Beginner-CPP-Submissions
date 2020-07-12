#include<cstdlib>
#include<iostream>

using namespace std;

void printArray(int*, int);

int main()
{
    int n;
    //copy all elements of an array to another


    cout << "Enter the size of array ";
    cin >> n;

    int arr[n], rain[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index Number : " << i << " :  "; 
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        rain[i] = arr[i];
    }

    cout << "Elements of array " << endl;
    printArray(arr, 5);
}

void printArray(int *rain, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << rain[i] << "  ";
    }
}
