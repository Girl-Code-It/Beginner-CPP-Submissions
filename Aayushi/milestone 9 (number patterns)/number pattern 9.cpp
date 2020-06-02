#include<iostream>
using namespace std;
int main()
{
    int rows, i, j;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}
