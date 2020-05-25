#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[100],k,temp,i,j,c;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
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
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
                c++;
        }
        if(c==k)
            {
                cout<<a[i];
                break;
            }
    }
    return 0;
}
