using namespace std;
#include<iostream>

void input(int a[20][20],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        cout<<"\n Enter the elements of row "<<i+1<<" :";
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
}

void add(int a[20][20],int b[20][20],int row,int col)
{
    cout<<"\n Addition of matrix A and B :";
    for(int i=0;i<row;i++)
    {
        cout<<endl;
        for(int j=0;j<col;j++)
        {
            cout<<(a[i][j]+b[i][j])<<" ";
        }
    }
}

int main()
{
    int a[20][20],b[20][20],row,col;

    cout<<"\n Enter the total number of rows :";
    cin>>row;

    cout<<" Enter total number of columns :";
    cin>>col;

    cout<<"\n Matrix A :";
    input(a,row,col);

    cout<<"\n Matrix B :";
    input(b,row,col);


    add(a,b,row,col);
    return 0;
}

