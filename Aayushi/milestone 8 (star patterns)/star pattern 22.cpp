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
        for (j=0; j<=2*rows-1; j++)
        {
        if(j<=rows+i-1 && j>=rows-i+1)
        {
            if(j<=rows )
            {
                cout<<n;
                    n++;
            }

            else if(j<=rows*2-1 && j>rows )
            {
                cout<<k;
                    k++;
            }
        }
        else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
