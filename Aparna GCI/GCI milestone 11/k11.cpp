#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],b[10],c[10],i,j,n,m,k;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=n-1,j=0;i>=0,j<n;i--,j++)
   {
         c[i]=a[j];
   }
   for(i=0;i<n;i++)
    cout<<c[i]<<" ";
   return 0;
}
