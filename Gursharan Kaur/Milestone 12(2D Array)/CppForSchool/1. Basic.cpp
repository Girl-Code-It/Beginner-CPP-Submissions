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
    cout<<"Display of Array: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Sum Total Of Array: \n";
    int sum_total=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum_total=sum_total+arr[i][j];
        }
    }
    cout<<sum_total<<"\n";
    int sum_row[r],sum_column[c];
    cout<<"Sum Of Array Row Wise: \n";
    for(i=0;i<r;i++)
    {   sum_row[i]=0;
        for(j=0;j<c;j++)
        {
            sum_row[i]+=arr[i][j];
        }
        cout<<sum_row[i]<<"\n";
    }
    cout<<"Sum Of Array Column Wise: \n";
    for(j=0;j<c;j++)
    {   sum_column[j]=0;
        for(i=0;i<r;i++)
        {
            sum_column[j]+=arr[i][j];
        }
        cout<<sum_column[j]<<"\n";
    }
    cout<<"Transpose of Matrix: \n";
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }

}
