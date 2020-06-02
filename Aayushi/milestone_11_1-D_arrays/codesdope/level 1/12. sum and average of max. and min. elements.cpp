#include <iostream>
using namespace std;
int max(int x, int y, int z)
{
    if(y>x && y>z)
        return y;
    else if(x>y && x>z)
        return x;
    else
        return z;
}
int min(int x, int y, int z)
{
    if(y<x && y<z)
        return y;
    else if(x<y && x<z)
        return x;
    else
        return z;
}

int main()
{
    int i, size=10000, maxima=0, minima;
    int arr[size];

    cout<<"Enter the size of the array :";
    cin>>size;
    cout<<"Enter "<<size<<" elements of the arrays : ";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n arr["<<size<<"] = { ";
    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
        maxima=max(maxima, arr[i], arr[i-1]);
    }
    minima=maxima;
    for(i=0; i<size; i++)
    {
        minima=min(minima, arr[i], arr[i-1]);
    }
    cout<<"}\n\n";
    cout<<"Maxima of elements of array : "<<maxima<<endl;
    cout<<"Minima of elements of array : "<<minima<<endl;
    cout<<"Sum of maxima and minima : "<<(maxima+minima)<<endl;
    cout<<"Average of maxima and minima : "<<(maxima+minima)/2<<endl;
}
