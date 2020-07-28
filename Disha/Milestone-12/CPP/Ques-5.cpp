using namespace std;
#include<iostream>
void middle(int a[20][20],int row,int col)
{
    int i,k;
    i=(col/2);

    cout<<"\n Elements of middle column :";
    for(k=0;k<col;k++)
    {
        cout<<a[k][i]<<" ";
    }

    i=(row/2);
    cout<<"\n Elements of middle row :";
    for(k=0;k<row;k++)
    {
        cout<<a[i][k]<<" ";
    }
}
int main()
{
    int a[20][20],row,col;

    cout<<"\n Enter the total number of rows :";
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
    middle(a,row,col);
    return 0;
}
