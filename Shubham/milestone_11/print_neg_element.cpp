#include<cstdlib>
#include<iostream>

using namespace std;

void print_neg_elem(int *, int);

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

    print_neg_elem(arr, n);
}

void print_neg_elem(int* rain, int size)
{
    for(int i=0; i<size; i++)
    {
        if(rain[i] < 0)
            cout << rain[i] << "    ";
    }
    cout << endl;
}
