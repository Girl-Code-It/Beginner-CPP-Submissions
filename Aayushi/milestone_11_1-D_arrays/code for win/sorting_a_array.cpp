#include<iostream>
using namespace std;

int main()
{
    int x, y, size=1000, temp, choice;
    int arr[size], tempArr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(x=0; x<size; x++)
    {
        cin>>arr[x];
        tempArr[x]=arr[x];
    }
    cout<<"\nChoose the order : \n 1. Ascending order \n 2. Descending order \n";
    cout<<"Choice : ";
    cin>>choice;
    cout<<"\n arr["<<size<<"] = { ";
    for(x=0; x<size; x++)
    {
        cout<<tempArr[x]<<", ";
        for(y=x+1; y<size; y++)
        {
            if(choice==1)
            {
                if(arr[x] > arr[y])
                {
                    temp = arr[x];
                    arr[x] = arr[y];
                    arr[y] = temp;
                }
            }
            else if (choice==2)
            {
                if(arr[x] < arr[y])
                {
                    temp = arr[x];
                    arr[x] = arr[y];
                    arr[y] = temp;
                }
            }
            else
            {
                cout<<"Invalid choice...";
                break;
            }
        }
    }
    cout<<"}\n";
    cout<<" sorted arr["<<size<<"] = { ";
    for(x=0; x<size; x++)
    {
        cout<<arr[x]<<", ";
    }
    cout<<"}\n";
    return 0;
}
