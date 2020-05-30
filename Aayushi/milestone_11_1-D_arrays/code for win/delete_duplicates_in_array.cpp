#include<iostream>
using namespace std;

int main()
{
    int i=0, k, size=1000, sum=0, num_dup=0, j=0;
    int arr[size], count[size], index[i], new_arr[j];
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
        for(k=size-1; k>=0; k--)
        {
            if(arr[i]==arr[k])
            {
                index[i]=k;
                count[i]++;
            }
        }
        if(count[i]>1)
        {
            if(i==index[i])                  //executes only for first occurance of element in the array
            {
                cout<<"frequency of "<<arr[i]<<" : "<<count[i]<<endl;
                sum+=count[i];
                num_dup++;
            }
        }
    }
    cout<<"total number of duplicates in the array are : "<<sum<<endl;
    cout<<"After deleting the duplicates : "<<endl;
    cout<<"new_arr[ "<<size-sum+num_dup<<" ] : { ";
    for(i=0; i<size; i++)
    {
        if(count[i]>1)
        {
            if(i==index[i])                  //executes only for first occurance of element in the array
            {
                new_arr[j]=arr[i];
                //cout<<arr[i]<<", ";
                j++;
            }
        }
        else
        {
            new_arr[j]=arr[i];
            //cout<<arr[i]<<", ";
            j++;
        }
    }
    for(i=0; i<j; i++)
    {
        cout<<new_arr[i]<<", ";
    }
    cout<<"} \n";

    return 0;
}
