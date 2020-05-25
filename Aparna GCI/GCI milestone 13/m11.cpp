#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,i,j,l,f;
    char a[20];
    f=0;
    cout<<"Enter no. of test cases : "<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the string : "<<endl;
        cin>>a;
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(l==2)
            {
                if(a[j]==a[j+1])
                    f=1;
                    break;
            }
            else
                if(a[j]==a[j+1]==a[j+2])
            {
                f=1;
                break;
            }
            else
               {
                   f=0;
                   break;
               }
        }
        if(f==1)
            cout<<"NO";
            else
                cout<<"YES";
        cout<<endl;
    }
    return 0;
}
