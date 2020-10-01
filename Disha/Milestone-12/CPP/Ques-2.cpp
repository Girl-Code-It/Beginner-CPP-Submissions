using namespace std;
#include<iostream>
void input(int a[20][20],int &row,int &col)
{
    cout<<"\n Enter the total number of rows :";
    cin>>row;

    cout<<" Enter total number of columns :";
    cin>>col;

    if(row!=col)
    {
        cout<<"Invalid input ";
    }

    else
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

}

void leftSum(int a[20][20],int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }
        }
    }
    cout<<"\n Left diagonal sum ="<<sum;
}

void rightSum(int a[20][20],int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i+j==row-1)
            {
                sum+=a[i][j];
            }
        }
    }
    cout<<"\n Right diagonal sum ="<<sum;
}

int main()
{
    int a[20][20],row,col,ans;

    do
    {
        cout<<"\n -----------------------------";
        cout<<"\n 1.Input elements ";
        cout<<"\n 2.Left-diagonal sum ";
        cout<<"\n 3.Right-diagonal sum ";
        cout<<"\n 4.Exit";
        cout<<"\n Enter your choice :";
        cin>>ans;
        switch(ans)
        {
            case 1:input(a,row,col);
                   break;
            case 2:leftSum(a,row,col);
                   break;
            case 3:rightSum(a,row,col);
                   break;
        }
    }while(ans!=4);

    return 0;
}
