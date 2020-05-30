#include<iostream>
using namespace std;

int main()
{
    int x, y, z, size1=100, size2=100;
    int arr1[size1], arr2[size2], newArr[size1+size2];
    cout<<"Enter the size of an array1 : ";
    cin>>size1;
    cout<<"Enter elements of an array1 : \n";
    for(x=0; x<size1; x++)
    {
        cin>>arr1[x];
    }
    cout<<"\nEnter the size of an array2 : ";
    cin>>size2;
    cout<<"Enter elements of an array2 : \n";
    for(y=0; y<size2; y++)
    {
        cin>>arr2[y];
    }
    cout<<"\n arr1 = { ";
    for(x=0; x<size1; x++)
    {
        cout<<arr1[x]<<", ";
        newArr[x]=arr1[x];
    }
    cout<<"}";
    cout<<"\n arr2 = { ";
    for(y=0; y<size2; y++)
    {
        cout<<arr2[y]<<", ";
        newArr[size1+y]=arr2[y];
    }
    cout<<"}";
    cout<<"\n\n After merging both the arrays : \n newArr["<<size1+size2<<"] = { ";
    for(z=0; z<size1+size2; z++)
    {
        cout<<newArr[z]<<", ";
    }
    cout<<"}\n";
    return 0;
}
