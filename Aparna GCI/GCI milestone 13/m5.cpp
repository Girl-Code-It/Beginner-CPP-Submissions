#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,i,j,m,n,p,k;
    p=0;
    char a[20][20];
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter no. of rows and columns : "<<endl;
        cin>>n>>m;
        cout<<"Enter the matrix : "<<endl;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            for(k=0;k<j;k++)
            {
                if(strcmp(a[j],a[k])==0)
                    p++;
            }
        }
        if(p>0)
            cout<<"NO";
        else
            cout<<"YES";
    }
    return 0;
}
