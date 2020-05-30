/*
2. Take 10 integer inputs from user and store them in an array.
  Again ask user to give a number. Now, tell user whether that
  number is present in array or not.
*/
#include<iostream>
using namespace std;

int main()
{
    int i, n, check=1;
    int arr[10];

    cout<<"Enter 10 elements of the arrays : ";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a number to check whether that number is present in array or not : ";
    cin>>n;

    cout<<"\n arr[10] = { ";
    for(i=0; i<10; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}\n\n";
    for(i=0; i<10; i++)
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
