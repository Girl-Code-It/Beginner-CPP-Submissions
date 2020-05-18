#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k=0;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=rows; i>0; i--)
    {
        k=i-1;
        for (j=i; j>0; j--)
        {
            cout<<k;
            k--;
        }
        cout<<"\n";
    }
    return 0;
}
