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
    int left_diagonal_sum=0, right_diagonal_sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
                left_diagonal_sum=left_diagonal_sum+arr[i][j];
            if((i+j)==(r+c)/2)
                right_diagonal_sum=right_diagonal_sum+arr[i][j];
        }
    }
    cout<<"left diagonal sum: "<<left_diagonal_sum<<"\n";
    cout<<"right diagonal sum: "<<right_diagonal_sum;
}
