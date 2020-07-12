#include<cstdlib>
#include<iostream>

using namespace std;

void print_array(int[] , int);

int main()
{ 
    //program to slice an array into twofd

     int n;
     cout << "Enter the size of array : ";
     cin >> n;

     int arr[n], rain[n/2], fog[n/2];

     for(int i=0; i<n; i++)
     {
         cout << "Enter the value of index " << i << " :  ";
         cin >> arr[i];
     }

     for(int i=0; i<n/2; i++)
     {
         rain[i] = arr[i];
     }

     for(int i=n/2, j=0; i<n; i++)
     {
         fog[j] = arr[i];
         j++;
     }

     cout << "First half Array : " << endl;
     print_array(rain, n/2);
     cout << endl;

     cout << "Second half Array  : " << endl;
     print_array(fog, n/2);
     cout << endl;



}


void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << "     ";
    } 
}

