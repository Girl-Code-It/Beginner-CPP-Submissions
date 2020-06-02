#include<iostream>
using namespace std;

int main()
{
    int x, size=1000, del;
    int arr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : ";
    for(x=0; x<size; x++)
    {
        cin>>arr[x];
    }
    cout<<" arr = { ";
    for(x=0; x<size; x++)
    {
        cout<<arr[x]<<", ";
    }
    cout<<"} \n";

    cout<<"enter the index of the element you want to delete : ";
    cin>>del;

    if(del>size || del<0)
        cout<<"entered index is invalid."<<endl;
    else{
    cout<<"\n array after deleting the element : \n";
    cout<<" arr = { ";
    for(x=0; x<size; x++)
    {
        if(x<del)
            cout<<arr[x]<<", ";
        else if(x>del)
            cout<<arr[x]<<", ";
    }
    cout<<"} \n";
    }
    return 0;
}
