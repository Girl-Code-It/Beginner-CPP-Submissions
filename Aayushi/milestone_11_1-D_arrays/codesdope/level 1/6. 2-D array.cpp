//Initialize and print all elements of a 2D array.
#include<iostream>
using namespace std;

int main()
{
    int i, j, rows=100, cols=100;
    int arr[rows][cols];

    cout<<"Enter the number of rows :";
    cin>>rows;
    cout<<"Enter the number of columns :";
    cin>>cols;

    for(i=0; i<rows; i++)
    {
        cout<<"Enter elements for row "<<i+1<<" : ";
        for(j=0; j<cols; j++)
            cin>>arr[i][j];
    }

    cout<<"\n arr["<<rows<<"]["<<cols<<"] :\n";
    for(i=0; i<rows; i++)
    {
        cout<<" | ";
        for(j=0; j<cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"| \n";
    }
    cout<<"\n";

    return 0;
}
