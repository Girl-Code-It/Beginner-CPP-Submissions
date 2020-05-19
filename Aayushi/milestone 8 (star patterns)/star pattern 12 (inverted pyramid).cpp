#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n=0, k;
    cout<<"Enter number of rows : ";
    cin>>rows;
    n=2*rows-1;
    k=1;
    for (i=1; i<=rows; i++)
    {
        for (j=1; j<=2*rows-1; j++)
        {
            if(j>=k && j<=n)
                {
                    cout<<"*";
                }
            else
                cout<<" ";
        }
        n--;
        k++;
        cout<<"\n";
    }
    return 0;
}
