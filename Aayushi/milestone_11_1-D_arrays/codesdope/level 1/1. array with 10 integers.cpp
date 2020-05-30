//1. Take 10 integer inputs from user and store them in an array and print them on screen.
#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[10];

    cout<<"elements of the arrays : ";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"arr[10] = { ";
    for(i=0; i<10; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}\n";
    return 0;
}
