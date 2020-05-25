#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,n,m,a[10][10],b[10][10],f;
    f=0;
    cout<<"Enter the size : "<<endl;
    cin>>n>>m;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        if(i==0||j==0)
           {
               b[i][j]=1;
               if(a[i][j]==-1)
                   {
                      f++;
                   }
           }
         else
            {
                b[i][j]=b[i-1][j]+b[i][j-1];
                if(a[i][j]==-1)
                {
                    f++;
                }
            }
    }
    cout<<endl<<b[n-1][m-1]-f;
    return 0;
}
