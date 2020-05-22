#include<iostream>
using namespace std;
int main()
{
    int rows=7, i, j, n=1;
    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=rows; j++)
        {
            if((j==1 || j==rows || i==1 || i==rows) || (j>=3 && j<=5 && i>=3 && i<=5)&& (j==3||j==5||i==3||i==5))
               cout<<"*";
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
