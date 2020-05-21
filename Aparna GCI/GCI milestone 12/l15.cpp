#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10][10],i,j,n,s,f,k,l;
    f=0;
    cout<<"Enter rows : "<<endl;
    cin>>n;
    cout<<"Enter elements : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        s=a[i][0];
        for(j=0;j<3;j++)
        {
            if(j==l)
                j++;
            if(j!=l)
            {
                if(a[i][j]<s)
                   {
                       s=a[i][j];
                       l=j;
                   }
            }
            j++;
        }
        f+=s;
        cout<<s<<" ";
    }
    cout<<f;
    return 0;
}
