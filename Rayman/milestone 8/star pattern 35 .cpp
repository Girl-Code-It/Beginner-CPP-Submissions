//pyramid pattern using single loop.
#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k=0, n, flag=1;
    cout<<"Enter number of rows: ";
    cin>>rows;
    k=0;
    for (i=1; i<=2*rows-1; i++)
    {
        if(i<rows-k)
        {
            cout<<" ";
        }
        else
        {
            if(flag==1)
                cout<<"*";
            else
                cout<<" ";
            flag=1-flag;
        }
        if(i==rows+k)
        {
            k++;
            cout<<"\n";
            if(i==2*rows-1)
                break;
            i=0;
            flag=1;
        }
        n--;
    }
    return 0;
}
