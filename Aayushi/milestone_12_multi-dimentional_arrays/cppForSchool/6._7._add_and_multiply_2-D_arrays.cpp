/*
6. Write a program to add two array A and B of size m x n.
7. Write a program to multiply array A and B of order NxL and LxM
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x, y, z, r1=0, c1=0, r2=0, c2=0, choice;

    cout<<"\nEnter your choice : \n 1. Addition \n 2. Multiplication\n";
    cout<<"Choice : ";
    cin>>choice;
    if(choice!=1 && choice!=2)
    {
        cout<<"Invalid choice..";
    }
   else
    {
    cout<<"\nEnter the number of rows for arr1 : ";
    cin>>r1;
    cout<<"Enter the number of columns for arr1 : ";
    cin>>c1;
    int arr1[r1][c1];
    cout<<"\nEnter elements of an array1 : \n";
    for(x=0; x<r1; x++)
    {
        cout<<"Enter elements for row "<<x+1<<" : ";
        for(y=0; y<c1; y++)
        {
            cin>>arr1[x][y];
        }
    }
    cout<<"\n\n arr1 : \n";
    for(x=0; x<r1; x++)
    {
        cout<<" | ";
        for(y=0; y<c1; y++)
        {
            cout<<arr1[x][y]<<" ";
        }
        cout<<"| \n";
    }

    if(choice==2)
    {
        r2=c1;
        cout<<"\nnumber of columns for arr2 : ";
        cin>>c2;
    }
    else if(choice==1)
    {
        c2=c1;
        r2=r1;
        cout<<"\nEnter the number of columns for arr2 : "<<c2;
    }
    cout<<"\nnumber of rows for arr2 : "<<r2;
    int arr2[r2][c2];
    cout<<"\n\nEnter elements of an array2 : \n";
    for(x=0; x<r2; x++)
    {
        cout<<"Enter elements for row "<<x+1<<" : ";
        for(y=0; y<c2; y++)
        {
            cin>>arr2[x][y];
        }
    }
    cout<<"\n arr2 : \n";
    for(x=0; x<r2; x++)
    {
        cout<<" | ";
        for(y=0; y<c2; y++)
        {
            cout<<arr2[x][y]<<" ";
        }
        cout<<"| \n";
    }

    if(choice==1)
    {
        cout<<"\nAfter adding arr1 and arr2 : \n";
      for(x=0; x<r1; x++)
      {
        cout<<" | ";
        for(y=0; y<c1; y++)
        {
            cout<<setw(3)<<arr1[x][y]+arr2[x][y]<<" ";
        }
        cout<<"| \n";
      }
    }

    if(choice==2)
    {
      int  product[r1][c2];
      cout<<"\nAfter multiplying arr1 and arr2 : \n";
      for(x=0; x<r1; x++)
      {
        cout<<" | ";
        for(y=0; y<c2; y++)
        {
            product[x][y]=0;
            for(z=0; z<c2; z++)
            {
                product[x][y]+=arr1[x][y]*arr2[x][z];
            }
            cout<<setw(3)<<product[x][y]<<", ";
        }
        cout<<"| \n";
      }
    }
    }
    return 0;
}
