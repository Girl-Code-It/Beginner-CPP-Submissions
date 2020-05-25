#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,i,l,k,m,j,n,o;
    char a[20],b[20];
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the string : "<<endl;
        cin>>a;
        l=strlen(a);
        k=l/2-1;
        m=l/2+1;
        n=l/2-2;
        o=l/2;
        cout<<k<<" "<<m<<endl;
        if(l%2==1){
        for(j=1;j<l;j++)
        {
            b[l/2]=a[0];
            if(j%2!=0)
            {
                b[k]=a[j];
                k--;
            }
            else
            {
                b[m]=a[j];
                m++;
            }
        }
        }
        else
        {
            b[l/2-1]=a[0];
            for(j=1;j<l;j++)
            {
                if(j%2==0)
                {
                   b[n]=a[j];
                   n--;
                }
                else
                {
                    b[o]=a[j];
                    o++;
                }
            }
        }
        for(j=0;j<l;j++)
            cout<<b[j];
            cout<<endl;
    }
    return 0;
}
