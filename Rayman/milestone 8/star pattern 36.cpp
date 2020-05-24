#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k=0, n, x=1;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=1; i<=rows; i++)
        {
            k=0;
            for (j=1; j<=i; j++)
            {
                    cout<<k;
                    k=k+i-1;
            }
          cout<<"\n";
        }
    return 0;
}
