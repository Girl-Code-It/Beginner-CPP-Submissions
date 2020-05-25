#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[20][20];
    int t,k,l,i,m,n,b,j;
    cout<<"Enter no. of possible passwords : "<<endl;
    cin>>t;
    cout<<"Enter the passwords : "<<endl;
    for(i=0;i<t;i++)
        {
            cin>>a[i];
        }
        l=strlen(a[0]);
        for(i=0;i<t;i++)
        {
            m=0;
            n=0;
            for(j=0;j<l;j++)
            {
                for(k=i+1;k<t;k++)
                   {
                       if(a[i][j]==a[k][l-j-1])
                {
                    m=k;
                    for(b=0;b<l;b++)
                    {
                        if(a[i][b]==a[m][l-b-1])
                            n++;
                    }
                }
            }
            if(n==l)
            {
                cout<<l<<a[i][l/2];
            }
            }
        }
    return 0;
}
