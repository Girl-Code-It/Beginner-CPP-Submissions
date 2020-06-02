//Write a C program to find second maximum element in an array.

#include<iostream>
using namespace std;

int main()
{
    int i, size=1, y, z;
    int arr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        if(arr[i]<z)
            y=z=arr[i];
    }
    for(i=0; i<size; i++)
    {
        if (arr[i]>y)
        {
            z=y;
            y=arr[i];
        }
        else if (y>arr[i] && arr[i]>z)
            z=arr[i];
    }
    cout<<"maximum : "<<y<<endl;
    cout<<"second largest element : "<<z<<endl;
    return 0;
}
