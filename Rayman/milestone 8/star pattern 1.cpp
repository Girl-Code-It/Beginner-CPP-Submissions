#include<iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int rows, i, j;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=0; i<rows; i++)
        {
          for (j=0; j<=i; j++)
            {
               cout<<"*";
            }
          cout<<"\n";
        }
    return 0;
}
