//Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays.
#include<iostream>
using namespace std;

int main()
{
    int i, j=0, size=1000, size1=100, size2=100, check=0;
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
    }
    cout<<"}\n";

    if(size%2==0)
        size1=size2=size/2;
    else
    {
        size1=(1+size)/2;
        size2=size-size1;
    }
    cout<<"\n\n new array 1 ["<<size1<<"] = { ";
    for(i=0; i<size1; i++)
    {
        newArr1[j]=arr[i];
        j++;
        cout<<newArr1[i]<<", ";
    }
    cout<<"}\n";

    cout<<"\n new array 2 ["<<size2<<"] = { ";
    for(i=size2; i<size; i++)
    {
        newArr2[j]=arr[i];
        cout<<newArr2[j]<<", ";
        j++;
    }
    cout<<"}\n\n";

    return 0;
}
