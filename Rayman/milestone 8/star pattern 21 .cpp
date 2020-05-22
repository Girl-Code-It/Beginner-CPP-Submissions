#include<iostream>
using namespace std;
int main()
{
    int rows, i, j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=0; i<rows; i++)
    {
        for (j=1; j<=2*rows; j++)
        {
            if(j>=rows-i && j<=2*rows-i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
