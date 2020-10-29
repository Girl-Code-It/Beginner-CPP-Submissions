#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n;
    char k;
    cout<<"Enter number of rows: ";
    cin>>rows;
    k='A';
    n='A';
    for (i=1; i<=rows; i++)
    {
        k=n;
        for (j=1; j<=i; j++)
        {
            cout<<k;
            k--;
        }
        cout<<"\n";
        n++;
    }
    return 0;
}
