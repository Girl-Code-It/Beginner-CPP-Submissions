#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,n,k,i,j,l,c,m;
    c=0;
    char a[20];
    cin>>t;
    cin>>n>>k;
    for(m=0;m<t;m++){
    for(i=0;i<n;i++)
    {
        cin>>a;
        int b=strlen(a);
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='P'&&j!=b-1)
            {
                for(l=j+1;l<=j+k;l++)
                {
                    if(a[l]=='T')
                    {
                        c++;
                        a[l]='*';
                        break;
                    }
                }
            }
            else
                if(a[j]=='P'&&j!=0)
            {
                for(l=j-1;l>=k;l--)
                {
                    if(a[l]=='T')
                    {
                        c++;
                        break;
                    }
                }
            }
        }
    }
        cout<<c<<endl;
    }
    return 0;
}
