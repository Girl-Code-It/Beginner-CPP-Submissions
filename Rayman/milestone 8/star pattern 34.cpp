#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k=1, n, p=1, m, x=1;
    cout<<"Enter number of rows: ";
    cin>>rows;
    n=rows;
    m=rows;
    for (i=1; i<=rows; i++)
        {
            k=p;
            x=n;
            for (j=1; j<=i; j++)
            {
                cout<<k;
                k=k-x;
                x++;
            }
          p=p+m;
          m--;
          n--;
          cout<<"\n";
        }
    return 0;
}
