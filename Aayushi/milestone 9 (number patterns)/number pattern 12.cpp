#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=rows; i>=1; i--)
    {
        k=i;
        for(j=1; j<=i; j++)
        {
            if(i%2!=0)
                cout<<j;
            else
            {
                cout<<k;
                k++;
            }
        }
        cout<<"\n";
    }
    return 0;
}
