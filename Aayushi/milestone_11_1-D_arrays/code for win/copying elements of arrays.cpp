#include<iostream>
using namespace std;

int main()
{
    int x, size=1000;
    int arr1[size];
    int arr2[size];
    cout<<"Enter the size of an arrays : ";
    cin>>size;
    cout<<"Enter elements of an array1 : \n";
    for(x=0; x<size; x++)
    {
        cin>>arr1[x];
    }
    for(x=0; x<size; x++)
    {
        arr2[x]=arr1[x];
    }

    cout<<" arr1 = { ";
    for(x=0; x<size; x++)
    {
        cout<<arr1[x]<<", ";
    }
    cout<<"}\n";
    cout<<" arr2 = { ";
    for(x=0; x<size; x++)
    {
        cout<<arr2[x]<<", ";
    }
    cout<<"}";
    return 0;
}
