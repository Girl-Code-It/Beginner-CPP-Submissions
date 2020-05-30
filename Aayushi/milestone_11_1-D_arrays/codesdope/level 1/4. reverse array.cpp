/*
4. Take 10 integer inputs from user and store them in an array.
   Now, copy all the elements in another array but in reverse order.
*/
#include<iostream>
using namespace std;

int main()
{
    int i, j=0;
    int arr[10], revArr[10];

    cout<<"Enter 10 elements of the arrays : ";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n arr[10] = { ";
    for(i=0; i<10; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}\n\n";
    for(i=9; i>=0; i--)
    {
        revArr[j]=arr[i];
        j++;
    }

    cout<<"\n reverse array of arr[10] = { ";
    for(i=0; i<10; i++)
    {
        cout<<revArr[i]<<", ";
    }
    cout<<"}\n\n";

    return 0;
}
