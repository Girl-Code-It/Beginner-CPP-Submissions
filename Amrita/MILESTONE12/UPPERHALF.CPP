// To print upper half of a triangle

#include<iostream>
#define col_size 100
using namespace std;
void upper_half(int A[][col_size],int m,int n);
void input(int A[][col_size],int m,int n);
void display(int A[][col_size],int m,int n);
int main()
{
    int a[80][col_size],m,n;
    cout<<"Enter dimensions of the array\n";
    cin>>m>>n;
    input(a,m,n);
    display (a,m,n);
    upper_half(a,m,n);
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
void upper_half(int A[][col_size],int m,int n)
{
     int i ,j;

    cout<<"The upper half triangle is  \n";
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           if (i<=j)
            {
               cout<<A[i][j];
            }
           else
           {
               cout<<" ";
           }

        }
        cout<<endl;
    }
}
