#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int x, size, even=0, odd=0;
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(x=0; x<size; x++)
    {
        cin>>arr[x];
    }
    for(x=0; x<size; x++)
    {
        if(arr[x]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"number of even elements : "<<even<<endl;
    cout<<"number of odd elements : "<<odd<<endl;
    return 0;
}
