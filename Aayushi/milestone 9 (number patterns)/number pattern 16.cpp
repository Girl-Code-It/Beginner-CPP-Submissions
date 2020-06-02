#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k=1;
    cout<<"enter number of rows : ";
    cin>>rows;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%2!=0)
                cout<<j%2;
            else
                cout<<1-j%2;
        }
        cout<<"\n";
    }
    return 0;
}
