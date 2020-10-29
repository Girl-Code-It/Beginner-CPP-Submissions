#include<iostream>
using namespace std;
int main()
{
    int rows, space, i, j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=0; i<rows; i++)
    {
        for (j=0; j<=2*rows-1; j++)
        {
            if(j>=rows+1-i && j<=rows-1+i)
                cout<<"*";
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
