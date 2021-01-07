// Multiplication of matrices

#include<iostream>
#define colsize 100
#define rowsize 100
void input(int A[][colsize],int m,int n);
void display (int A[][colsize],int m,int n);
void multiply (int A[][colsize],int B[][colsize],int m,int n);
using namespace std;
int main ()
{
    int arr1[rowsize][colsize],arr2[rowsize][colsize],m,n,p,q;
    cout<<"Enter the rows and columns of array 1\n";
    cin>>m>>n;
    cout<<"Enter the rows and columns of array 2\n";
    cin>>p>>q;
    if (n==p)
    {
        cout<<"Enter elements of array 1\n";
        input(arr1,m,n);
        display(arr1,m,n);
        cout<<"Enter elements of array 1\n";
        input(arr2,p,q);

        display(arr2,p,q);
        cout<<"The matrix obtained by multiplication is\n";
        multiply(arr1,arr2,m,q);
    }
    else
    {
        cout<<"Cannot multiply both the matrices\n ";
        cout<<"Enter valid input (Row of array 2=Column of array 1)\n";
    }
}
void input(int A[][colsize],int m,int n)
{


    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }
}
void display (int A[][colsize],int m,int n)
{
    cout<<"The elements entered are \n";
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j];
        }
        cout<<endl;
    }
}
void multiply (int A[][colsize],int B[][colsize],int m,int n)
{
    int k,arr[rowsize][colsize];
    for (int i=0;i<m;i++)

        for (int j=0;j<n;j++)
        {

            arr[i][j]=0;

        }

    for (int i=0;i<m;i++)

        for (int j=0;j<n;j++)

            for (k=0;k<n;k++)
            {arr[i][j]+=A[i][k]*B[k][j];}



    display (arr,m,n);
}
