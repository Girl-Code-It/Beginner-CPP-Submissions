// PROGRAM TO LEFT ROTATE AN array

#include<iostream>
#define size 100
using namespace std;
void print();
void rotateleft();
void leftrotatebyuser();
void print (int arr[],int length)
{
    for (int i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
void rotateleft(int arr[],int length)
{
    int temp,i;
    temp=arr[0];
    for ( i=0;i<length-1;i++)
    {

            arr[i]=arr[i+1];
    }
    arr[i]=temp;

}
void leftrotatebyuser(int arr[],int length,int d)
{
    for (int i=0;i<d;i++)
        rotateleft(arr,length);
}



int main()
{
    int arr[size],length,d;
    cout<<"entr length\n";
    cin>>length;
    cout<<"enter elements\n";
    for (int i =0;i<length;i++)
    {
        cin>>arr[i];
    }


    cout<<"the original array \n";
    print(arr,length);
    cout<<"\nHow many times do you want to rotate the array ?\n";
    cin>>d;
    leftrotatebyuser( arr,length,d);
    print(arr,length);
    return 0;
}



