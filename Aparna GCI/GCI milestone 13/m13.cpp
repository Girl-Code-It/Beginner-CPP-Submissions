#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,e,i,j,l,k,m,b[26]={0};
    char a[50],c;
    cout<<"Enter the no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the string : "<<endl;
        cin>>a;
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            b[(char)a[j]-97]++;
        }
        for(j=1;j<=l;j++)
        {
            for(k=0;k<26;k++)
            {
                if(b[k]==j)
                {
                    for(m=1;m<=j;m++)
                    {
                        c=k+97;
                        cout<<c;
                    }
                }
            }
        }
            cout<<endl;
    }
    return 0;
}
