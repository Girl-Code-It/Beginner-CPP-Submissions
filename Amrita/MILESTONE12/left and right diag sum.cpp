// left and right diagonal sum of a  2D Array

#include<iostream>
#define col_size 100
using namespace std;
void input(int A[][col_size],int m,int n);
void display(int A[][col_size],int m,int n);
void diag_left_sum(int A[][col_size],int m,int n);
void diag_right_sum(int A[][col_size],int m,int n);

int main()
{
    int a[80][col_size],m,n;
    cout<<"Enter the dimensions of the array(equal dimensions, i.e.,m=n )\n";
    cin>>m>>n;
    input(a,m,n);
    display(a,m,n);
    diag_left_sum(a,m,n);
    diag_right_sum(a,m,n);
    return 0;
}
void input(int A[][col_size],int m,int n)
{
   int i ,j;
    cout<<"Enter the elements  \n";
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           cin>>A[i][j];
        }
        cout<<endl;
    }
}
void display(int A[][col_size],int m,int n)
{
    int i ,j;

    cout<<"The elements entered by you are \n";
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
void diag_left_sum(int A[][col_size],int m,int n)  // left diagonal sum
{
    int i,j,sum=0;
    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==j)
                sum+=A[i][j];
        }
    }
    cout<<"The sum of left diagonal is "<<sum<<endl;
}
void diag_right_sum(int A[][col_size],int m,int n)  // right diagonal sum
{
    int i,j,sum=0;
    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if ((i+j)==m-1)
                sum+=A[i][j];
        }
    }
    cout<<"The sum of right diagonal is "<<sum<<endl;
}
