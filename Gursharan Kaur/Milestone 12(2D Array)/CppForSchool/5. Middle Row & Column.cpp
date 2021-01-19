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
    int middle_row[c],middle_column[r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==r/2)
                middle_row[j]=arr[i][j];
            if(j==c/2)
                middle_column[i]=arr[i][j];
        }
    }
    cout<<"Middle Row: ";
    for(i=0;i<c;i++)
    {
        cout<<middle_row[i]<<" ";
    }
    cout<<"\n";
    cout<<"Middle column: ";
    for(j=0;j<r;j++)
    {
        cout<<middle_column[j]<<" ";
    }
}
