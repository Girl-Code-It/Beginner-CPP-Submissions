#include<iostream>
using namespace std;

int main()
{
    int x, size=1000;
    int arr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(x=0; x<size; x++)
    {
        cin>>arr[x];
    }
    cout<<" arr = { ";
    for(x=0; x<size; x++)
    {
        cout<<arr[x]<<", ";
    }
    cout<<"}";
    return 0;
}
