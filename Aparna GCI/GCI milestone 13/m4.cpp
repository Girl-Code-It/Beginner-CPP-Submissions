#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[50],b[50],l;
    int i,j,t,k,f;
    f=0;
    cout<<"Enter the no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the string : "<<endl;
        cin>>a;
        for(j=0;a[j]!='\0';j++)
        {
            l=a[j];
            for(k=0;k<=f;)
                {
                    if(l!=b[k])
                      {
                        b[k]=l;
                        k++;
                        f++;
                      }
                }
        }
        cout<<b;
    }
    return 0;
}
