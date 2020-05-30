#include<iostream>
using namespace std;

int main()
{
    int x, size=1000, inserted;
    int arr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(x=0; x<size; x++)
    {
        cin>>arr[x];
    }
    cout<<"enter the element you want to insert : ";
    cin>>inserted;
    arr[size]=inserted;
    cout<<"\n array after inserting the element : \n";
    cout<<" arr = { ";
    for(x=0; x<=size; x++)
    {
        cout<<arr[x]<<", ";
    }
    cout<<"} \n";
    return 0;
}
