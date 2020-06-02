//Write a C program to print all unique elements in the array.

#include<iostream>
using namespace std;

int main()
{
    int i, k, size=1000;
    int arr[size], count[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"unique elements of the array are : { ";
    for(i=0; i<size; i++)
    {
        count[i]=1;
        for(k=0; k<size; k++)
        {
            if(arr[i]==arr[k] && i!=k)
            {
                count[i]++;
            }
        }
        if(count[i]==1)
            cout<<arr[i]<<", ";
    }
    cout<<"} \n";
    return 0;
}
