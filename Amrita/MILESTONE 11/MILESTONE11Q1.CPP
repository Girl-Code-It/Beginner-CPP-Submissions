// PROGRAM TO STORE AND DISPLAY ELEMENTS IN AN array
#include<iostream>
using namespace std;

int main ()
{
    int arr[10];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY (10 only) :\n";
    for (int i =0;i<10;i++)
    {
        cin>>arr[i];

    }
    cout<<"THE ELEMENTS ENTERED BY THE USER ARE \n";
    for (int i =0;i<10;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    return 0;

}
