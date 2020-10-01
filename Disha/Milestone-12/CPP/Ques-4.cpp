using namespace std;
#include<iostream>
void upperhalf(int a[20][20],int row,int col)
{
    cout<<"\n Output:";
    for(int i=0;i<row;i++)
    {
        cout<<endl;
        for(int j=0;j<col;j++)
        {
            if(i<=j)
                cout<<a[i][j];
            else
                cout<<" ";
        }
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

    upperhalf(a,row,col);
    return 0;
}
