#include<iostream>
using namespace std;
int main()
{
    int rows, space, i, j;
    char k=65;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=0; i<rows; i++)
    {
        for (space=1; space <= rows-i; space++)
            cout<<" ";
        for (j=0; j<=i; j++)
        {
            cout<<k;
            k--;
        }
        cout<<"\n";
        k=k+2*i+3;
    }
    return 0;
}
