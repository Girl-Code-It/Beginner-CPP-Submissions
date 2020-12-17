// PROGRAM TO SEARCH AN ELEMENT IN AN ARRAY
#include<iostream>
#define size 100
using namespace std;

int main()
{
    int arr[size],value,length,flag=0,i;
    cout<<"Enter the size of the array\n";
    cin>>length;
    cout<<"Enter the elements\n";
    for ( i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array entered is\n";
    for ( i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nEnter the value to be searched\n";
    cin>>value;
     for ( i=0;i<length;i++)
    {
        if (value==arr[i])
            {
                flag=1;
                break;
            }
    }
    if (flag==1)
        cout<<"Element found at "<<i+1<<" position\n";
    else
        cout<<"Element does not exist \n";
}
