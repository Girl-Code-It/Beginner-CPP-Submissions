#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],i,j,m,n,k;
    cout<<"Enter the size : "<<endl;
    cin>>n>>m;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
        for(k=0;k<n;k++)
        {
            i=k;
            j=0;
            while(i>=0)
            {
                cout<<a[i][j]<<" ";
                i--;
                j++;
            }
            cout<<endl;
        }
        for(k=1;k<m;k++)
        {
            i=n-1;
            j=k;
            while(j<m)
            {
                cout<<a[i][j]<<" ";
                i--;
                j++;
            }
            cout<<endl;
        }
    return 0;
}
