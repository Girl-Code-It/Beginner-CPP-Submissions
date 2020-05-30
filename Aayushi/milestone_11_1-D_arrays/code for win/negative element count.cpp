#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int x, size, negative=0;
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(x=0; x<size; x++)
    {
        cin>>arr[x];
    }
    for(x=0; x<size; x++)
    {
        if(arr[x]<0)
        {
            negative++;
        }
    }
    cout<<"number of negative elements : "<<negative;
    return 0;
}
