#include<cstdlib>
#include<iostream>

using namespace std;

void printArray(int*, int);
void addElem(int*, int ,int, int);
int main()
{

    //program to insert an element at specified position

    int n, pos, value;


    cout << "Enter the size of array ";
    cin >> n;

    int arr[n], rain[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index Number : " << i << " :  "; 
        cin >> arr[i];
    }

    cout << "Enter the position : \t" << endl;
    cin >> pos;

    cout << "Enter the value : \t" << endl;
    cin >> value;

    cout << "Elements of array " << endl;

    printArray(arr, n);
    addElem(arr, n, pos, value);
    printArray(arr, n+1);
}

void printArray(int *rain, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << rain[i] << "  ";
    }
    cout << endl;
}

void addElem(int *arr, int size, int pos, int value)
{
    for(int i=size; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos] = value;

}                                                                                                                                                        
