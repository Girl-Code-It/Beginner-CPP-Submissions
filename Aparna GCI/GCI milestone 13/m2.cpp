#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,n,i,j;
    char a[20],b[20];
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cout<<"Enter no. of bases : "<<endl;
        cin>>n;
        cout<<"Enter DNA sequence (in capital letters) : "<<endl;
        cin>>a;
        for(i=0;i<n;i++)
           {
                if(a[i]=='A')
                   b[i]='T';
                else
                 if(a[i]=='T')
                   b[i]='A';
                else
                 if(a[i]=='G')
                   b[i]='C';
                else
                  if(a[i]=='C')
                   b[i]='G';
                else
                   if(a[i]!='A'||a[i]!='T'||a[i]!='G'||a[i]!='C')
                       {
                          strcpy(b,"Error RNA nucleobases found!");
                          break;
                       }
           }
        puts(b);
    }
    return 0;
}
