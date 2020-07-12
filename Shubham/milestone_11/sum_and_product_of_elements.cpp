#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);

int main()
{   
    //program to find sum and product of all elements of array


    int n, sum=0, product=1;

    cout << "Enter the number of elements : " << endl;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of element No " << i << " :  ";
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }


    cout << "Sum of all element of given array is " << sum << endl;
    cout << "Product of all elemtents of given array is " << product << endl;



  
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}

