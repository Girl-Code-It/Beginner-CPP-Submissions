#include<iostream>
using namespace std;

int main()
{
    int i, j=0, size=10;
    int arr[10], revArr[10];

    cout<<"Enter the size of an array : ";
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
    }
    cout<<"}\n\n";
    for(i=size-1; i>=0; i--)
    {
        revArr[j]=arr[i];
        j++;
    }

    cout<<" reverse array of arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        cout<<revArr[i]<<", ";
    }
    cout<<"}\n";

    return 0;
}
