#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[20],b[20];
    int t,i,j,k,l,m,f,g;
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        f=g=0;
        cout<<"Enter the string : "<<endl;
        cin>>a;
        k=0;
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]=='a'||a[j]=='i'||a[j]=='e'||a[j]=='o'||a[j]=='u')
            {
                b[k]=a[j];
                k++;
            }
        }
        m=k;
        for(j=0;j<m-1;j++)
        {
            if(a[j]>a[j+1])
            {
                f++;
            }
            else
                if(a[j]<a[j+1])
                {
                    g++;
                }
        }
        if((g==m-1&&f==0)||m==0)
        {
            cout<<"GOOD";
        }
        else
            if(f==m-1&&g==0)
        {
            cout<<"WORST";
        }
        else
            cout<<"BAD";
            cout<<endl;
    }
    return 0;
}
