#include<iostream>
using namespace std;

int main()
{
    int i, n, check=1, size=0;
    int arr[size];

    cout<<"Enter the size of the array : ";
    cin>>size;
    cout<<"Enter "<<size<<" elements of the arrays : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a number to check whether that number is present in array or not : ";
    cin>>n;

    cout<<"\n arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}\n\n";
    for(i=0; i<size; i++)
    {
        if(arr[i]==n)
        {
            cout<<n<<" is present in the array at index "<<i<<endl;
            check=1;
            break;
        }
        else
        {
            check=0;
        }
    }
    if(check==0)
        cout<<n<<" is not present in the array.\n";

    return 0;
}
