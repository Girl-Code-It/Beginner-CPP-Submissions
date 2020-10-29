using namespace std;
#include<iostream>
int main()
{
    int k,flag=1,row,col;
    cout<<"\n Enter the number of rows :";
    cin>>row;
    col=2*row-1;
    for(int i=1,k=0;i<=col;i++)
    {

        if(i<row-k)
        {
            cout<<" ";
        }
        else
        {
            if(flag)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            flag=1-flag;

        }


        if(i==row+k)
        {
            k++;
            flag=1;
            cout<<endl;
            if(i==col)
            {
                break;
            }
            i=0;
        }
    }
    return 0;
}
