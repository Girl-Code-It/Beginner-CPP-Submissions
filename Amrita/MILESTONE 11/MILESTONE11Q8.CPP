// PRINTING SUB ARRAYS
#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY \n";
    for (int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    cout<<"THE SUB-ELEMENTS OF THE ARRAY ARE\n";
    for (int i=0;i<10;i++)
    {
       if (i>=3 && i<=8)
       {
           cout<<arr[i];
           cout<<endl;
       }
    }


    return 0;

}
