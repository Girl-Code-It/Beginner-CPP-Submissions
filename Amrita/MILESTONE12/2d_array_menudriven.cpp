// Menu drive program for 2D array.

#include<iostream>
#define col_size 100
using namespace std;

void display (int A[][col_size],int m,int n);
void input(int A[][col_size],int m,int n);
void sum (int A[][col_size],int m,int n);
void transpose(int A[][col_size],int B[][col_size],int m,int n);
void display_row(int A[][col_size],int m,int n);
void display_col(int A[][col_size],int m,int n);

int main ()
{
    int m,n,choice,A[80][col_size],B[80][col_size];
    cout<<"Enter the dimensions of the array (rows and coloumns)\n ";
    cin>>m>>n;
    do
    {
        cout<<"Choose the options to see the desired operations \n";
         cout<<"\n1.Input the elements \n2.Display all elements \n3.Display sum of all the elements \n4.Display row wise sumn\n5.display coloumn wise sum \n6.Transpose the matrix \n7.Exit\n";
        cin>>choice;
      switch (choice)
      {
            case 1: input( A,m,n);
            break;
            case 2: display( A,m,n);
            break;
            case 3: sum( A,m,n);
            break;
            case 4: display_row( A,m,n);
            break;
            case 5: display_col( A,m,n);
            break;
            case 6: transpose( A,B,m,n);
            break;
            case 7: exit(0);
            break;
            default : cout<<"Enter valid option\n";
            break;

 }
    }while (choice !=7);
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
void sum (int A[][col_size],int m,int n)
{
  int i ,j,sum=0;

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           sum+=A[i][j];
        }

    }
    cout<<"The sum of the elements are  "<<sum<<endl;
}
void display_row(int A[][col_size],int m,int n)
{

    int i ,j,sum_r=0;

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           sum_r+=A[i][j];
        }
        cout<<"The sum of the elements in row "<<i+1<<" is "<<sum_r<<endl;
        sum_r=0;

    }

}
void display_col(int A[][col_size],int m,int n)
{

    int i ,j,sum_c=0;

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           sum_c+=A[j][i];
        }
        cout<<"The sum of the elements in coloumn "<<i+1<<" is "<<sum_c<<endl;
        sum_c=0;

    }

}
void transpose (int A[][col_size],int B[][col_size],int m,int n)
{
    int i,j;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           B[i][j]=A[j][i];
        }


    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           cout<<B[i][j]<<" ";
        }
        cout<<endl;


    }


}






