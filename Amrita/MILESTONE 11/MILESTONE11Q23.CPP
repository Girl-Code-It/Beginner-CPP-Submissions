
// PROGRAM TO RIGHT ROTATE AN ARRAY

#include<iostream>
#define size 100
using namespace std;
void print();
void rotateright();
void rightrotatebyuser();
void print (int arr[],int length)
{
    for (int i=0;i<length;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
void rotateright(int arr[],int length)
{
    int temp,i;
    temp=arr[length-1];
    for ( i=length-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

}
void rightrotatebyuser(int arr[],int length,int d)
{
    for (int i=0;i<d;i++)
        rotateright(arr,length);
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
    rightrotatebyuser( arr,length,d);
    print(arr,length);
    return 0;
}



