// PROGRAM TO COPY ELEMENTS IN ANOTHER ARRAY IN REVERSE ORDER

#include<iostream>
using namespace std;

int main ()
{
    int arr[10],arr_copy[10],i,j;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY (10 only) :\n";
    for ( i =0;i<10;i++)
    {
        cin>>arr[i];

    }
    cout<<"THE ELEMENTS COPIED IN THE OTHER ARRAY ARE \n";
    for (j =0,i=9;j<10;j++,i--)
    {
        arr_copy[j]=arr[i];
        cout<<arr_copy[j]<<endl;
    }
    return 0;

}

