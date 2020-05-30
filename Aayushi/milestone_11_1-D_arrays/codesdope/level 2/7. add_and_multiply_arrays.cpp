//7. Write a program to add and multiply two 3x3 matrices.
#include<iostream>
using namespace std;

int main()
{
    int x, y;
    int arr1[3][3], arr2[3][3], product[3][3];
    cout<<"Enter elements of an array1 : \n";
    for(x=0; x<3; x++)
    {
        cout<<"Enter elements for row "<<x+1<<" : ";
        for(y=0; y<3; y++)
        {
            cin>>arr1[x][y];
        }
    }
    cout<<"\nEnter elements of an array2 : \n";
    for(x=0; x<3; x++)
    {
        cout<<"Enter elements for row "<<x+1<<" : ";
        for(y=0; y<3; y++)
        {
            cin>>arr2[x][y];
        }
    }
    cout<<"\n arr1 : \n";
    for(x=0; x<3; x++)
    {
        cout<<" | ";
        for(y=0; y<3; y++)
        {
            cout<<arr1[x][y]<<", ";
        }
        cout<<"| \n";
    }
    cout<<"\n arr2 : \n";
    for(x=0; x<3; x++)
    {
        cout<<" | ";
        for(y=0; y<3; y++)
        {
            cout<<arr2[x][y]<<", ";
        }
        cout<<"| \n";
    }
    cout<<"\nAfter adding arr1 and arr2 : \n";
    for(x=0; x<3; x++)
    {
        cout<<" | ";
        for(y=0; y<3; y++)
        {
            cout<<arr1[x][y]+arr2[x][y]<<", ";
        }
        cout<<"| \n";
    }
    cout<<"\nAfter multiplying arr1 and arr2 : \n";
    for(x=0; x<3; x++)
    {
        cout<<" | ";
        for(y=0; y<3; y++)
        {
            product[x][y]=arr1[x][y]*arr2[x][1] +  arr1[x][y]*arr2[x][2] + arr1[x][y]*arr2[x][3];
            cout<<product[x][y]<<", ";
        }
        cout<<"| \n";
    }
    return 0;
}
