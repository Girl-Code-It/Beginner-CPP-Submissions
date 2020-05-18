#include<iostream>
using namespace std;
int main()
{
    int rows, j, i;
    char k=65;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for (i=1; i<=rows; i++)
    {
        k='A';
        for (j=1; j<=2*rows-1 ; j++)
        {
            if(j<=rows+1-i || j>=rows-1+i)
            {
                cout<<k;
                if (j>=rows)
                    k--;
                else
                    k++;
            }
            else
            {
                cout<<" ";
                if(j==rows)
                    k--;
            }
        }
        cout<<"\n";
    }
    return 0;
}
