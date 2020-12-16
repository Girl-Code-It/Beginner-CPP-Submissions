// PROGRAM TO DELETE AN ELEMENT FROM AN ARRAY AT SPECIFIED POSITION

#include<iostream>
#define size 100
using namespace std;
int main ()
{
    int arr[size],index,length;
    cout<<"ENTER THE LENGTH OF THE ARRAY\n";
    cin>>length;
    cout<<"ENTER THE ARRAY ELEMENTS\n";
    for (int i=1;i<=length;i++)
    {
        cin>>arr[i];

    }
    cout<<"THE ARRAY IS \n";

        for (int i=1;i<=length;i++)
        {
            cout<<arr[i]<<"\t";

        }
        cout<<"\nENTER THE INDEX OF THE ELEMENT YOU WANT TO ENTER\n";
        cin>>index;
        if (index>length || index<0)
            cout<<"THE INDEX DOES NOT EXIST\n";
        else
        {

              for (int i=index-1;i<=length-1;i++)
                   {
                        arr[i]=arr[i+1];
                   }
        }

        length--;
        cout<<"THE EDITED ARRAY IS \n";

        for (int i=1;i<=length;i++)
        {
            cout<<arr[i]<<"\t";

        }



}
