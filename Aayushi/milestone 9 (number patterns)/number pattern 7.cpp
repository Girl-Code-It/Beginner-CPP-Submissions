#include<iostream>
using namespace std;
int main()
{
    int rows, i, j;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=1; i<=rows; i++)
    {
        for(j=i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
