#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n=0;
    cout<<"Enter (odd) number of rows : ";
    cin>>rows;
    n=(rows+1)/2+1;
    for (i=1; i<=rows; i++)
    {
        if(i>(rows+1)/2)
            {
                n++;
            }
        else
            {
                n--;
            }
        for (j=1; j<=rows; j++)
        {
            if(j>=n && j<=rows-n+1)
                {
                    cout<<"*";
                }
            else
                cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
