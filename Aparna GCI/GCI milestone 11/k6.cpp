#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],n,i,j,b[10];
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0,j=0;i<n,j<n;)
    {
        if(j!=0)
        {
            b[j]=a[--i];
            i++;
        }
        else
        {
            b[j]=a[n-1];
        }
        i++;
        j++;
    }
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
        return 0;
}
