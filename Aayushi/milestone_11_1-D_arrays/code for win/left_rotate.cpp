#include<iostream>
using namespace std;

int main()
{
    int i, size=1000, times, t;
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
    cout<<"\n\n After rotation "<<times<<" times from left : \n arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        if(i+times<size)
            newArr[i]=arr[i+times];
        else
        {
            if (times<=size)
            {
                newArr[i]=arr[i-size+times];
            }
            else                            //times>size
            {
                times=times%size;
                if(i+times<size)
                    newArr[i]=arr[i+times];
                else if(times<=size)
                {
                    newArr[i]=arr[i-size+times];
                }
            }
        }
        cout<<newArr[i]<<", ";
    }
    cout<<"}\n\n";
    return 0;
}
