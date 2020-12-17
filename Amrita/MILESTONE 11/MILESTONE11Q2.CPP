// PROGRAM TO FIND AN ELEMENT IN AN ARRAY
#include<iostream>
using namespace std;

int main ()
{
    int arr[10],value,flag=0;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY (10 only) :\n";
    for (int i =0;i<10;i++)
    {
        cin>>arr[i];

    }
    cout<<"ENTER THE VALUE YOU WANT TO SEARCH IN THE ARRAY :\n";
    cin>>value;
    for (int i =0;i<10;i++)
    {
        if (arr[i]==value)
        {
            cout<<"ELEMENT FOUND AT "<<i+1<<"th POSITION\n";
            flag=1;
            break;
        }

    }
    if (flag==0)
    {
        cout<<"ELEMENT DOES NOT EXIST WITHIN THE ARRAY\n";
    }
    return 0;

}

