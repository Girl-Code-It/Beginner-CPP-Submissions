#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],n,i,j,b[10],c[10],k;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0,j=0,k=0;i<n,j<n/2,k<n/2;i++)

    {
        if(i<n/2)
      {
          b[j]=a[i];
          j++;
      }
      else
        if(i>=n/2)
       {
           c[k]=a[i];
           k++;
       }
    }
    cout<<"New arrays : "<<endl;
    for(j=0;j<n/2;j++)
       {
           cout<<b[j]<<" ";
       }
        cout<<endl;
    for(k=0;k<n/2;k++)
        {
            cout<<c[k]<<" ";
        }
    return 0;
}
