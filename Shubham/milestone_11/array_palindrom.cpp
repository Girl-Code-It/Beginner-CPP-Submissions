#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);

int main()
{ 
  
    //program to check if the elements of an array are same from front and back

    int n, flag=0;

    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n], rain[n];

    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of index No " << i << " : ";
        cin >> arr[i];
    }

    for(int i=0, j=n-1; i<n; i++, j--)
    {
        rain[i] = arr[j];
    }

    for(int i=0, j=n-1; i<=j; i++, j--)
    {
        if(arr[i] != rain[j])
        {
            flag=1;
            break;
        }
    }

    if(flag == 0)
        cout << "Yes ! Elements from front and back are same" << endl;
    else
        cout << "No ! Elements are not same from back and fornt" << endl;



}


void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}

