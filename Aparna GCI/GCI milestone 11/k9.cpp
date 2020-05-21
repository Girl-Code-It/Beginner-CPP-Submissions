#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],i,n,temp,j;
    temp=0;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<a[n-2];
    return 0;
}
