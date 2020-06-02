#include<iostream>
using namespace std;

int main()
{
    int i, size=1000, size1=0, size2=0;
    int arr[size], newArr1[size], newArr2[size];

    cout<<"Enter the size of the array : ";
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
        if(arr[i]%2==0)
        {
            newArr1[size1]=arr[i];
            size1++;
        }
        else
        {
            newArr2[size2]=arr[i];
            size2++;
        }
    }
    cout<<"}\n";
    cout<<"\n Even numbers : array1 ["<<size1<<"] = { ";
    for(i=0; i<size1; i++)
    {
        cout<<newArr1[i]<<", ";
    }
    cout<<"}\n";

    cout<<"\n Odd numbers : array2 ["<<size2<<"] = { ";
    for(i=0; i<size2; i++)
    {
        cout<<newArr2[i]<<", ";
    }
    cout<<"}\n\n";

    return 0;
}
