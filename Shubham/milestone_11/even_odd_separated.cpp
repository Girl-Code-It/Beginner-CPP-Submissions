#include<cstdlib>
#include<iostream>
#define MAX 100

using namespace std;

void printArray(int*, int);

int main()
{
    //program to put even and odd elements in separate array

    int even[MAX], odd[MAX], arr[MAX];
    int n, j=0, k=0;

    cout << "Enter the size of array : ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index Number " << i << " :  ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }

    even[j] = '\0';
    odd[k] = '\0';
    cout << "Enen Array : " << endl;
    printArray(even, n);

    cout << "Odd Array : " << endl;
    printArray(odd, n);


}

void printArray(int* arr, int size)
{
    for(int i=0; arr[i]!= NULL; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
