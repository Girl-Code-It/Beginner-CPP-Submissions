// TO 2D MATRIX IN SPIRAL ORDER

#include<iostream>
#define colsize 50
#define rowsize 50

using namespace std;
void input(int A[rowsize][colsize],int m,int n);
void spiral(int A[rowsize][colsize],int m,int n);
void display(int A[rowsize][colsize],int m,int n);
int main()
{
    int m,n,A[rowsize][colsize];
    cout<<"ENTER THE ROWS AND COLOUMNS OF THE 2D ARRAY\n";
    cin>>m>>n;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY\n";
    input(A,m,n);
    cout<<"THE ELEMENTS ENTERED BY THE USER ARE \n";
    display(A,m,n);
    cout<<"THE SPIRAL ORDER PRINT OF 2D ARRAY IS \n";
    spiral(A,m,n);
    return 0;
}
 void input(int A[rowsize][colsize],int m,int n)
 {
     for (int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>A[i][j];
         }
         cout<<endl;
     }
 }

void display(int A[rowsize][colsize],int m,int n)
{
    for (int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<A[i][j];
         }
         cout<<endl;
     }
}
void spiral(int A[rowsize][colsize],int m,int n)
{
    int T=0,B=m-1,L=0,R=n-1,dir=0;
    while( T<=B && L<=R )
  {
    if(dir==0)
    {
        for(int k=L;k<=R;k++)
            cout<<A[T][k];
        T++;
    }
    else if (dir==1)
    {
        for(int k=T;k<=B;k++)
            cout<<A[k][R];
        R--;
    }
     else if (dir==2)
     {
         for(int j=R;j>=L;j--)
            cout<<A[B][j];
         B--;
     }
     else if (dir==3)
     {
         for(int p=B;p>=T;p--)
            cout<<A[p][L];
         L++;
     }
     dir=(dir+1)%4;
  }

}
