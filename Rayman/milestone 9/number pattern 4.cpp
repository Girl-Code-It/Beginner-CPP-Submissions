#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=rows; j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
