#include<iostream>
using namespace std;
int main()
{
    int rows, i, j;
    char k;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=1; i<=rows; i++)
    {
        k='A';
        for (j=1; j<=2*rows-1; j++)
        {
            if(j>=rows+1-i && j<=rows+i-1)
            {
                cout<<k;
                if(j<rows)
                    k++;
                else
                    k--;
            }
            else
            cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
