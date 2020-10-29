#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[10][10],k,l,m,o,b[10][10],p,i,j;
    p=o=0;
    cout<<"Enter size : "<<endl;
    cin>>n;
    cout<<"Enter value of k : "<<endl;
    cin>>k;
    cout<<"Enter the array : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(m=0;m<n+1-k;m++)
    {
        p=0;
       {
         for(l=0;l<n+1-k;l++)
               {
                  b[m][l]=0;
                 for(i=o;i<n+o-k;i++)
                  {
                     for(j=p;j<n+p-k;j++)
                     b[m][l]+=a[i][j];
                  }
                  p++;
               }
       }
               o++;
    }
    for(i=0;i<n+1-k;i++)
    {
        cout<<endl;
        {
            for(j=0;j<n+1-k;j++)
               cout<<b[i][j]<<" ";
        }
    }
    return 0;
}
