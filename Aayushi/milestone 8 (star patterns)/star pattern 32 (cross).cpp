#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n=0;
    cout<<"Enter number of rows : ";
    cin>>rows;
    n=0;
    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=rows; j++)
        {
            if(j==rows-n || j==i)
                cout<<"*";
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
        n++;
    }
    return 0;
}
