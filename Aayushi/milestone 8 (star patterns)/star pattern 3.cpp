#include<iostream>
using namespace std;
int main()
{
    int rows, space, i, j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=rows; i>0; i--)
    {
        for (space=1; space<=rows-i; space++)
            {cout<<" ";}
        for (j=i; j>0; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
