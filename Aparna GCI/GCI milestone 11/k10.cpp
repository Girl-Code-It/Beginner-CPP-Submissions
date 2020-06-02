#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],n,i,c,j,f,k,b[10],d,temp;
    temp=0;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            {
                for(j=0;j<n;j++)
                    if(a[j]>=a[i])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
            for(i=0,j=0;i<n,j<n;i++,j++)
            {
                c=j;
                if(a[i]==a[i+1])
                {
                    b[j]=a[i];
                    i++;
                }
                else
                    b[j]=a[i];
            }
            for(i=0;i<c-1;i++)
                cout<<b[i]<<" ";

    return 0;
}
