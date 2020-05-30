/*
Initialize a 2D array of 3*3 matrix. E.g.-
1	2	3
4	5	6
7	8	9

Check if the matrix is symmetric or not.
*/
#include<iostream>
using namespace std;

int main()
{
    int i, j, rows=100, cols=100, sym=1;
    int arr[rows][cols];

    /* cout<<"Enter the number of rows :";
    cin>>rows;
    cout<<"Enter the number of columns :";
    cin>>cols; */

    rows=cols=3;

    for(i=0; i<rows; i++)
    {
        cout<<"Enter 3 elements for row "<<i+1<<" : ";
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
            if(arr[i][j]!=arr[j][i])
                sym=0;
        }
        cout<<"| \n";
    }
    cout<<"\n";

    if(sym==0)
        cout<<"Entered matrix is not symmetric.";
    else
        cout<<"Entered matrix is symmetric.";

    return 0;
}
