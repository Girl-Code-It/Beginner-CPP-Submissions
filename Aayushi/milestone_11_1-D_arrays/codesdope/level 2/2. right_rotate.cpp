/*
2.
Write a program to shift every element of an array to circularly right. E.g.-
INPUT : 1 2 3 4 5
OUTPUT : 5 1 2 3 4
*/
#include<iostream>
using namespace std;

int main()
{
    int i, size=1000, times;
    int arr[size], newArr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Input number of times to rotate : ";
    cin>>times;

    cout<<"\n arr = { ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}";
    cout<<"\n\n After rotation "<<times<<" times from right : \n arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        if(i<times && times<=size)
            newArr[i]=arr[size-times+i];
        else
        {
            if (i>=times && times<size)
            {
                newArr[i]=arr[i-times];
            }
            else                            //times>size
            {
                times=times%size;
                if(i<times)
                    newArr[i]=arr[size-times+i];
                else
                {
                    newArr[i]=arr[i-times];
                }
            }
        }
        cout<<newArr[i]<<", ";
    }
    cout<<"}\n\n";
    return 0;
}
