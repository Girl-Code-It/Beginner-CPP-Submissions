// PROGRAM TO REVERSE AN ARRAY

#include<iostream>
#define size 100
using namespace std;

int main ()
{
    int arr[size],i,length;
    cout<<"ENTER THE SIZE OF THE ARRAY\n";
    cin>>length;
    cout<<"ENTER THE ELEMENTS\n";
    for ( i=0;i<length;i++)
    {
        cin>>arr[i];

    }
    cout<<"THE ARRAY ENTERED BY YOU IS \n";
    for ( i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";

    }
    cout<<"\n DISPLAYING ARRAY IN REVERSE ORDER\n";
    for ( i=length-1;i>=0;i--)
    {
        cout<<arr[i]<<"\t";

    }
    return 0;

}
