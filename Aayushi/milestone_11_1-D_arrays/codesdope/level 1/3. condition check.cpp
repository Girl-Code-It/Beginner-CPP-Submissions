/*
3.
Take 20 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.
*/
#include<iostream>
using namespace std;

int main()
{
    int i, countp=0, countn=0, count0=0, counte=0, counto=0;
    int arr[20];

    cout<<"Enter 20 elements of the arrays : ";
    for(i=0; i<20; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n arr[10] = { ";
    for(i=0; i<20; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}\n\n";
    for(i=0; i<20; i++)
    {
        if(arr[i]>0)
        {
            //cout<<arr[i]<<" is positive. "<<endl;
            countp++;
        }
        else if(arr[i]<0)
        {
            //cout<<arr[i]<<" is negative. "<<endl;
            countn++;
        }
        else if(arr[i]==0)
        {
            count0++;
        }
    }

    for(i=0; i<20; i++)
    {
        if(arr[i]%2==0)
        {
            //cout<<arr[i]<<" is even.\n";
            counte++;
        }
        else
        {
            //cout<<arr[i]<<" is odd.\n";
            counto++;
        }
    }
    cout<<"Number of positive numbers : "<<countp<<endl;
    cout<<"Number of negative numbers : "<<countn<<endl;
    cout<<"Number of zeros : "<<count0<<endl;
    cout<<"Number of even numbers : "<<counte<<endl;
    cout<<"Number of odd numbers : "<<counto<<endl;

    return 0;
}
