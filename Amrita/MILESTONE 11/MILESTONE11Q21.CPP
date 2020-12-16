// PROGRAM TO SORT AN ARRAY IN  ASCENDING ORDER

#include<iostream>
#define size 100

using namespace std;
int main()
{
    int arr[size],i,j=0,length,temp;
    cout<<"Enter the length\n";
    cin>>length;
    cout<<"Enter the elements\n";

    for(i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array entered is \n";
    for(i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }
    for (i=0;i<length;i++)
    {
        for (j=i+1;j<length;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\nThe sorted array is\n";
    for(i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
