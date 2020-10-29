#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n;
    char k;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=1; i<=rows; i++)
    {
        k='A';
        n=1;
        for (j=0; j<=2*rows; j++)
        {
        if(j<=rows+i && j>=rows-i)
        {
            if(j<rows )
            {
                cout<<k;
                    k++;
            }

            else if(j<=rows*2 && j>rows )
            {
                cout<<n;
                    n++;
            }
        }
        else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
