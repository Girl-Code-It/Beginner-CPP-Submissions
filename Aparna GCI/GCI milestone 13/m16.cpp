#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    char a[20];
    int t,i,s,b,j,l,c;
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        s=c=b=0;
        cout<<"Enter the string : "<<endl;
        cin>>a;
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]>='a'&&a[j]<='z')
            {
                s++;
            }
            else
                if(a[j]>='A'&&a[j]<='Z')
            {
                b++;
            }
            else
                c++;
        }
        if(c<l)
        {
        if(s>b)
        {
            for(j=0;j<l;j++)
            {
                a[j]=tolower(a[j]);
            }
            cout<<b;
        }
        else
            if(s<b)
        {
            for(j=0;j<l;j++)
            {
                a[j]=toupper(a[j]);
            }
            cout<<s;
        }
        }
        else
            if(c==l)
        {
            cout<<"Invalid input"<<endl;
        }
    }
    return 0;
}
