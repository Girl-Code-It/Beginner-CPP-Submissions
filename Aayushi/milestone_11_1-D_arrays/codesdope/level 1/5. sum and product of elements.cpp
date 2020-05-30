//Write a program to find the sum and product of all elements of an array
#include<iostream>
using namespace std;

int main()
{
    int i, size=10000, sum=0, product=1;
    int arr[size];

    cout<<"Enter the size of the array :";
    cin>>size;
    cout<<"Enter "<<size<<" elements of the arrays : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"}\n\n";
    cout<<"Sum of elements of array : "<<sum<<endl;
    cout<<"Product of elements of array : "<<product<<endl;

    return 0;
}
