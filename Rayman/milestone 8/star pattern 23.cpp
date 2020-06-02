#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k=1;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=0; i<rows; i++)
        {
            k=1;
            for (j=0; j<=i; j++)
            {
               cout<<k;
          if(k==1)
            k=0;
          else
            k=1;
            }
          cout<<"\n";
        }
    return 0;
}
