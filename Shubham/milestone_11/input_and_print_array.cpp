#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);

int main()
{
    int n, arr[10];

    for(int i=0; i<10; i++)
    {
        cout << "Enter the value of element No " << i << " :  ";
        cin >> arr[i];
    }

    cout << "The elements of array are : " << endl;

    print_array(arr, 10);
 
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}
