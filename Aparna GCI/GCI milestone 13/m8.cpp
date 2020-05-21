#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,p,t;
    char a[20];
    p=0;
    cout<<"Enter the no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        p=0;
        cout<<"Enter the string : "<<endl;
        cin>>a;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]!=' ')
                   {
                       for(k=j+1;a[k]!='\0';k++)
                       {
                            if(a[j]=='{'&&a[k]=='}')
                          {
                              p++;
                              a[j]=' ';
                              a[k]=' ';
                              break;
                          }
                           else
                        if(a[j]=='('&&a[k]==')')
                           {
                               p++;
                               a[j]=' ';
                               a[k]=' ';
                               break;
                           }
                        else
                        if(a[j]=='['&&a[j]==']')
                            {
                                p++;
                                a[j]=' ';
                                a[k]=' ';
                                break;
                            }
                       }
                   }
        }
        cout<<2*p;
    }
    return 0;
}
