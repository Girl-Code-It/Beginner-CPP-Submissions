#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter no. of rows and coloumns: ";
    cin>>r>>c;
    int arr1[r][c],arr2[r][c],sum[r][c];
    cout<<"Enter Array1: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr1[i][j];
        }
        cout<<"\n";
    }
    cout<<"Enter Array2: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>arr2[i][j];
        }
        cout<<"\n";
    }
    cout<<"Sum Of Two Arrays are: ";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
}
