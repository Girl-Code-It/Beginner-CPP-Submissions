#include<iostream>
using namespace std;

int main()
{
    int i=0, k, size=1000;
    int arr[size], count[size], index[i];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        count[i]=0;
        for(k=0; k<size; k++)
        {
            if(arr[i]==arr[k])
            {
                index[i]=k;
                count[i]++;
            }
        }
        if(count[i]>1)
        {
            if(i==index[i])                  //executes only for last occurance of element in the array
                cout<<"frequency of "<<arr[i]<<" : "<<count[i]<<endl;
        }
        else
            cout<<"frequency of "<<arr[i]<<" : "<<count[i]<<endl;
    }
    return 0;
}
