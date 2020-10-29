#include<iostream>
using namespace std;
int main()
{
    int rows, space, i, j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=0; i<rows; i++)
    {
        for (space=1; space <= rows-i; space++)
            cout<<" ";
        for (j=0; j<=i; j++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}
