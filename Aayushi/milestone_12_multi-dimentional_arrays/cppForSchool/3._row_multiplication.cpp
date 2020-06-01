#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    int rows, cols, i=0, j=0, row_product;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of columns : ";
    cin>>cols;
    int arr[rows][cols];
    cout<<"\nEnter the elements of array : \n";
    for(int i=0; i<rows; i++)
    {
        cout<<"Enter "<<cols<<" elements for row "<<i+1<<" : ";
        for(int j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\nElements of the array are : \n";
    for(int i=0; i<rows; i++)
    {
        cout<<" |";
        for(int j=0; j<cols; j++)
        {
            cout<<setw(4)<<arr[i][j];
        }
        cout<<"| \n";
    }

    cout<<"\nProduct of the elements of array : ";
    for(int i=0; i<rows; i++)
    {
        row_product=1;
        cout<<"\nProduct of elements of row "<<i+1<<" : ";
        for(int j=0; j<cols; j++)
        {
            row_product*=arr[i][j];
        }
        cout<<row_product;
    }
}
