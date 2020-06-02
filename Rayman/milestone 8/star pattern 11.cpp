#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n=0;
    cout<<"Enter (odd) number of rows : ";
    cin>>rows;
    for (i=1; i<=rows; i++)
    {
        if(i>(rows+1)/2)
            {
                n--;
            }
        else
            {
                n++;
            }
        for (j=1; j<=n; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
