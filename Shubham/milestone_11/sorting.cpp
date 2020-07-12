#include<cstdlib>
#include<iostream>
#define MAX 100

using namespace std;

void sort(int*, int);
void printArray(int*, int);

int main()
{
    int n;
    cout << "Enter the size of array :  ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index number " << i << " :  ";
        cin >> arr[i];
    }

    sort(arr, n);
    cout << "Sorted Array : " << endl;

    printArray(arr, n);

}

void printArray(int* arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void sort(int *arr, int size)
{
    int i, j, temp;

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
