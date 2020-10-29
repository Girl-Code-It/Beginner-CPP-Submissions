#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);

int main()
{   
    //copy array to another array in reverse


    int n, arr[10], rain[10];

    for(int i=0; i<10; i++)
    {
        cout << "Enter the value of element No " << i << " :  ";
        cin >> arr[i];
    }

    for(int i=0, j=9; i<10; i++, j--)
    {
        rain[i] = arr[j];
    }

    cout << "Elements of new array are " << endl;
    print_array(rain, 10);

  
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}

