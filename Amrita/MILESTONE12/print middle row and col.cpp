// Print middle row and coloumn

#include<iostream>
#define col_size 100
void display (int A[][col_size],int m,int n);
void input(int A[][col_size],int m,int n);
void mid_display(int A[][col_size],int m,int n);
using namespace std;
int main()
{
    int a [80][col_size],m,n;
    cout<<"Enter the dimension of the array \n";
    cin>>m>>n;
    input(a,m,n);
    display(a,m,n);
    mid_display(a,m,n);
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

void mid_display(int A[][col_size],int m,int n)
{
     int i ,j;
    cout<<"The middle elements are  \n";
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           if(j==n/2 || i==m/2)
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
