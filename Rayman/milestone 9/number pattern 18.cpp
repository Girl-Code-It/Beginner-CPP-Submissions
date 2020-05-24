#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k=1, n=0;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=rows; j++)
        {
                cout<<j*2-1;
        }
        cout<<"\n";
    }
    return 0;
}
