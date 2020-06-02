#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[10],i,q,b[10],j,s,c;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    for(i=0;i<q;i++)
        cin>>b[i];
    for(i=0;i<q;i++)
    {
        s=c=0;
        for(j=0;j<n;j++)
        {
            if(b[i]>=a[j])
            {
                c++;
                s+=a[j];
            }
        }
        cout<<c<<" "<<s<<endl;
    }
    return 0;
}
