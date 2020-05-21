#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,a,b,s[10],temp,i,j,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>a>>b;
        for(j=0;j<n;j++)
        {
            s[j]=(j*j*a)+((n-j)*(n-j)*b);
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(s[j]<s[k])
                {
                    temp=s[j];
                    s[j]=s[k];
                    s[k]=temp;
                }
            }
        }
        cout<<s[0]<<endl;
    }
    return 0;
}
