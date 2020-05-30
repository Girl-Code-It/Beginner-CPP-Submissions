//Write a C program to find sum of all array elements.

#include<iostream>
using namespace std;

int main()
{
    int x, size=1, sum=0;
    int arr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(x=0; x<size; x++)
    {
        cin>>arr[x];
    }
    for(x=0; x<size; x++)
    {
        sum = sum + arr[x];
    }
    cout<<"sum of elements : "<<sum;
    return 0;
}
