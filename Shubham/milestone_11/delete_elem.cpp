#include<cstdlib>
#include<iostream>

using namespace std;
void del(int*, int, int);
void print(int*, int);
int main()
{
    //delete an element from a specified position

    int n, pos;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the vlaue of index Number " << i << ": ";
        cin >> arr[i];
    }

    cout << "Enter the position : ";
    cin >> pos;

    del(arr, n, pos);
    print(arr, n-1);

}

void print(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void del(int *arr, int size, int pos)
{
    for(int i=pos; i<size; i++)
    {
        arr[i] = arr[i+1];
    }    

}
