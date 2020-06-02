#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n=0, k;
    cout<<"Enter odd number of rows : ";
    cin>>rows;
    n=(rows-1)/2;
    for (i=1; i<=rows; i++)
    {
        k=1;
        for (j=1; j<=(rows+1)/2; j++)
        {
            if(j<=n)
                cout<<" ";
            else
            {
                cout<<k;
                k++;
            }
        }
        cout<<"\n";
        if(i<(rows+1)/2)
            n--;
        else
            n++;
    }
    return 0;
}
