/*
11. If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60],
    your program should be able to find that the subarray lies between the indexes 3 and 8.
*/

#include<iostream>
using namespace std;

int main()
{
    int i, j=0, size=1000, size1=100, size2=100, check=0;
    int arr[size], newArr1[size], newArr2[size];

    cout<<"Enter the size of the array : ";
    cin>>size;
    // here 10 12 20 30 25 40 32 31 35 50 60
    cout<<"Enter "<<size<<" elements of the arrays : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}\n";

    cout<<"\nEnter the size of the sub array 1 : ";
    cin>>size1;                                         //here 3
    cout<<"Enter the size of the sub array 2 : ";
    cin>>size2;                                         //here 8
    cout<<"\n\n new array 1 ["<<size1<<"] = { ";
    for(i=0; i<size1; i++)
    {
        newArr1[j]=arr[i];
        j++;
        cout<<newArr1[i]<<", ";
    }
    cout<<"}\n";

    cout<<"\n new array 2 ["<<size2<<"] = { ";
    for(i=(size-size2); i<size; i++)
    {
        newArr2[j]=arr[i];
        cout<<newArr2[j]<<", ";
        j++;
    }
    cout<<"}\n\n";

    return 0;
}
