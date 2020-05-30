//8. Write a program to check if elements of an array are same or not it read from front or back.
#include<iostream>
using namespace std;

int main()
{
    int i, j=0, size=1000, check=0;
    int arr[size], revArr[size];

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
    for(i=size-1; i>=0; i--)
    {
        revArr[j]=arr[i];
        j++;
    }

    cout<<"\n reverse array of arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        cout<<revArr[i]<<", ";
        if(arr[i]!=revArr[i])
        {
            check=1;
        }
    }
    cout<<"}\n\n";

    if(check==1)
        cout<<"elements of an array are not same from front and back."<<endl;
    else
        cout<<"elements of an array are same and cannot be read from front or back."<<endl;

    return 0;
}
