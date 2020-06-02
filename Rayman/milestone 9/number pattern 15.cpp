#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, k, n=1, m;
    cout<<"enter number of rows : ";
    cin>>rows;

    k=rows;
    for(i=rows; i>=1; i--)
    {
        m=k;
        for(j=rows; j>=1; j--)
        {
            if(j>=i)
            {
                cout<<m;
                m++;
            }
            else
                cout<<rows;
        }
        cout<<"\n";
        k--;
    }
    return 0;
}
