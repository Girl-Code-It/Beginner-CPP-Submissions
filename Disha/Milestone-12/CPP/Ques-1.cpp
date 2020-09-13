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
void display(int a[20][20],int row, int col)
{
    for(int i=0;i<row;i++)
    {
        cout<<endl;
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }

    }
}

void sum(int a[20][20],int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<"\n Sum of all elements of array is :"<<sum<<endl;
}

void rowWise(int a[20][20],int row,int col)
{
    int sum;
    for(int i=0;i<row;i++)
    {
        sum=0;
        for(int j=0;j<col;j++)
        {
            sum+=a[i][j];
        }
        cout<<"\n Sum of elements of row "<<i+1<<" ="<<sum;
    }
}

void colWise(int a[20][20],int row,int col)
{
    int sum;
    for(int i=0 ;i<col;i++)
    {
        sum=0;
        for(int j=0;j<row;j++)
        {
            sum+=a[j][i];
        }
        cout<<"\n Sum of elements of col"<<i+1<<" ="<<sum;
    }
}
void transpose(int a[20][20],int row,int col)
{
    int b[20][20];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    cout<<"\n Matrix A transpose =";
    display(b,col,row);
}



int main()
{
    int a[20][20],row,col,ans;

    cout<<"Enter the total number of rows :";
    cin>>row;

    cout<<"\n Enter total number of columns :";
    cin>>col;

    do
    {
        cout<<"\n -----------------------------------------------";
        cout<<"\n Enter your choice :";
        cout<<"\n 1.Input array ";
        cout<<"\n 2.Display array ";
        cout<<"\n 3.Display sum of all elements ";
        cout<<"\n 4.Display sum of array row-wise ";
        cout<<"\n 5.Display sum of array col-wise ";
        cout<<"\n 6.Display transpose of array ";
        cout<<"\n 7.Exit :";
        cin>>ans;
        switch(ans)
        {
            case 1: input(a,row,col);
                    break;
            case 2: cout<<"\n Matrix A :";
                    display(a,row,col);
                    break;
            case 3: sum(a,row,col);
                    break;
            case 4: rowWise(a,row,col);
                    break;
            case 5: colWise(a,row,col);
                    break;
            case 6: transpose(a,row,col);
                    break;
        }
    }while(ans!=7);
    return 0;
}
