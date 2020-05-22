#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k=1;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=1; i<=rows; i++)
    {
        k=1;
        for(j=1; j<=i; j++)
        {
            if(i%2!=0)
            {
                cout<<k;
                k+=2;
            }
            else
            {
                cout<<k+1;
                k+=2;
            }
        }
        cout<<"\n";
    }
    return 0;
}
