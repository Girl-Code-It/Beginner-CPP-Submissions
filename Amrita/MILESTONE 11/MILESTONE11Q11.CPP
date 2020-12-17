// PROGRAM TO INSERT ELEMENTS IN AN ARRAY

#include<iostream>
using namespace std;

int main ()
{

    int arr[10]={1,2,3,4,6,7},value,index;


    cout<<"ENTER THE VALUE YOU WANT TO ENTER \n";
    cin>>value;
    cout<<"ENTER THE INDEX AT WHICH YOU WANT TO INSERT THE ELEMENT\n";
    cin>>index;

    if (index>10 || index<0)
       {

        cout<<"INVALID OUTPUT\n";
       }
    else
    {
        for (int i=8;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
    }

    arr[index]=value;
    cout<<"THE EDITED ARRAY IS \n";
    for (int j=0;j<10;j++)
    {
        cout<<arr[j]<<"\t";
    }
    return 0;

}
