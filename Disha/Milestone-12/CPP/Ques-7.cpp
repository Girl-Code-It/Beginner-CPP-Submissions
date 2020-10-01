#include<iostream>
using namespace std;

void input(int a[20][20],int &row,int &col)
{
    cout<<"\n Enter total number of rows :";
    cin>>row;
    cout<<" Enter total number of columns :";
    cin>>col;

    for(int i=0;i<row;i++)
    {
        cout<<"\n Enter the elements of row "<<i+1<<" :";
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
}

void multiply(int a[20][20],int b[20][20],int row1,int row2,int col,int col2)
{
    int c[20][20];
    if(col!=row2)
    {
        cout<<"\n Invalid input ";
    }
    else
    {
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col2;j++)
            {
                c[i][j]=0;
                for(int k=0;k<col2;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"\n After multiplying matrix A and B :";
        cout<<"\n Output :";
        for(int i=0;i<row1;i++)
        {
            cout<<endl;
            for(int j=0;j<col2;j++)
            {
                cout<<c[i][j]<<" ";
            }
        }
    }
}

int main()
{
    int a[20][20],b[20][20],row1,row2,col,col2;

    cout<<"\n Matrix A:";
    input(a,row1,col);

    cout<<"\n Matrix B: ";
    input(b,row2,col2);

    multiply(a,b,row1,row2,col,col2);
    return 0;
}
