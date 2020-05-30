//Write a C program to find maximum and minimum element in an array.

#include<iostream>
using namespace std;

int max(int x, int y)
{
    return( (x>y)?x:y );     //if(x>y) return x; else return y;
}
int min(int x, int z)
{
    return( (x<z)?x:z );     //if(x<z) return x; else return z;
}

int main()
{
    int i, size=1, x=0, y=0, z=0;
    int arr[size];
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"Enter elements of an array : \n";
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    z=arr[0];
    for(i=0; i<size; i++)
    {
        /*
        x = arr[i];              //method1
        max(x,y);
        min(x,z);
        y = max(x,y);
        z = min(x,z);
        */
        if (arr[i]>y)            //method2
            y=arr[i];
        if(arr[i]<z)
            z=arr[i];

    }
    cout<<"maximum : "<<y<<endl;
    cout<<"minimum : "<<z<<endl;
    return 0;
}
