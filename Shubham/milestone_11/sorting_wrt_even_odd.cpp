#include<cstdlib>
#include<iostream>

using namespace std;
void print(int*, int);
int main()
{
    //sorting an array with respect to even odd
    int n, j=0, k=0;
    cout << "Enter the size of array: \t";
    cin >> n;

    int arr[n], rain[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index number " << i << ":\t";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            rain[j] = arr[i];
            j++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2 != 0)
        {
            rain[j] = arr[i];
            j++;
        }
    }

    print(rain, n);


}

void print(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
