// Program to display sum of two matrices

#include<iostream>
#define col_size 100
using namespace std;

void display (int A[][col_size],int m,int n);
void input(int A[][col_size],int m,int n);
void sum (int A[][col_size],int B[][col_size],int C[][col_size],int m,int n);

int main ()
{
    int a[80][col_size],b[80][col_size],c[80][col_size],m,n;
    cout<<"Enter the dimensions of the array\n";
    cin>>m>>n;
    input(a,m,n);
    input(b,m,n);
    display(a,m,n);
    display(b,m,n);
    sum(a,b,c,m,n);
    return 0;
}
void display(int A[][col_size],int m,int n)
{
    int i ,j;

    cout<<"The elements are \n";
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
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
void sum (int A[][col_size],int B[][col_size],int C[][col_size],int m,int n)
{
  int i ,j,sum=0;

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           C[i][j]=A[i][j]+B[i][j];
        }

    }
    cout<<"The final matrix is   "<<endl;
    display(C,m,n);
}
