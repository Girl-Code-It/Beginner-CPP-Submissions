#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int t,i,j,l,f,k;
    char n[10];
    f=0;
    cout<<"Enter the no. of test cases : ";
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the no : "<<endl;
        cin>>n;
        l=strlen(n);
        k=atoi(n);
        if(k%21==0)
        {
            f=1;
        }
        for(j=0;j<l;j++)
        {
            if(n[j]=='2'&&n[j+1]=='1')
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"Streak is broken!"<<endl;
        else
            cout<<"The streak lives still in our hearts!"<<endl;
    }
    return 0;
}
