#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter Row and Column: \n";
    cin>>r>>c;
    int arr[r][c];
    int i,j;
    cout<<"Insertion of Array: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Result is: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j<i)
                cout<<"  ";
            else
                cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

