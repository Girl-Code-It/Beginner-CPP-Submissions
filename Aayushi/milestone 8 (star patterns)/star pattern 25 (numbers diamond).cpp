#include<iostream>
using namespace std;
int main()
{
    int rows, i, j, n=0, k, m;
    cout<<"Enter (odd) number of rows : ";
    cin>>rows;
    n=(rows+1)/2+1;
    m=(rows+1)/2;
    for (i=1; i<=rows; i++)
    {
        k=m;
        if(i>(rows+1)/2)
            {
                n++;
            }
        else
            {
                n--;
            }
        for (j=1; j<=rows; j++)
        {
            if(j>=n && j<=rows-n+1)
                {
                    cout<<k;
                    k++;
                }
            else
                cout<<" ";
        }
        if(i>=(rows+1)/2)
            {
                m++;
            }
        else
            {
                m--;
            }
        cout<<"\n";
    }
    return 0;
}
